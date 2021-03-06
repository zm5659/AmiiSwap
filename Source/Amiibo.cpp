#include "MainApplication.hpp"

namespace amiibo
{
	AmiiboFile::AmiiboFile(std::string Name, std::string BinPath, std::string IconPath)
	{
		this->Name = Name;
		this->BinPath = BinPath;
		this->IconPath = IconPath;
	}

	std::string AmiiboFile::GetName()
	{
		return (this->Name);
	}

	std::string AmiiboFile::GetPath()
	{
		return (this->BinPath);
	}

	std::string AmiiboFile::GetIconPath()
	{
		return (this->IconPath);
	}

	AmiiboGame::AmiiboGame(std::string Name)
	{
		this->Name = Name;
	}

	std::string AmiiboGame::GetName()
	{
		return (this->Name);
	}

	std::string AmiiboGame::GetPath()
	{
		return (this->FolderPath);
	}

	std::vector<AmiiboFile*> AmiiboGame::GetBinFiles()
	{
		return (this->amiiboFiles);
	}

	void AmiiboGame::AddAmiiboFile(AmiiboFile *file)
	{
		this->amiiboFiles.push_back(file);
	}

	void AmiiboGame::SetAmiiboFiles(std::vector<AmiiboFile*> files)
	{
		this->amiiboFiles.insert(this->amiiboFiles.end(), files.begin(), files.end());
	}
}
