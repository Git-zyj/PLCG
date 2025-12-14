#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7711609937650329782ULL;
unsigned long long int var_1 = 16446466948253917022ULL;
unsigned long long int var_2 = 8759161906510719295ULL;
unsigned long long int var_3 = 7161645411857028755ULL;
unsigned long long int var_4 = 12731456617474755598ULL;
unsigned long long int var_8 = 8003521706978917144ULL;
unsigned long long int var_13 = 6846551016106783677ULL;
unsigned long long int var_14 = 6577496041496204870ULL;
unsigned long long int var_16 = 4670326615577415ULL;
unsigned long long int var_18 = 18185895136989944361ULL;
int zero = 0;
unsigned long long int var_19 = 5844039520055139127ULL;
unsigned long long int var_20 = 3806438772492346700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
