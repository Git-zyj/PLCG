#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 912708056U;
unsigned short var_7 = (unsigned short)23876;
unsigned short var_8 = (unsigned short)30181;
short var_10 = (short)-8946;
unsigned short var_11 = (unsigned short)45857;
unsigned long long int var_16 = 7229051684326249284ULL;
int zero = 0;
unsigned long long int var_18 = 12323539356112976599ULL;
unsigned long long int var_19 = 9788284544226741207ULL;
unsigned long long int var_20 = 17094796184641432382ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
