#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1804149246951803120ULL;
int var_5 = 2105268207;
short var_6 = (short)-19124;
long long int var_7 = -4225719505645176690LL;
long long int var_8 = -1018051018553789873LL;
unsigned long long int var_11 = 289949889190826671ULL;
unsigned short var_13 = (unsigned short)48350;
int zero = 0;
short var_15 = (short)10511;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)2408;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
