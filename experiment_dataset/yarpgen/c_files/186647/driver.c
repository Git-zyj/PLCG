#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17071470284295143326ULL;
unsigned short var_4 = (unsigned short)3891;
long long int var_7 = -4100979439118574441LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 12895837755432371491ULL;
unsigned long long int var_16 = 4996753570448811898ULL;
unsigned long long int var_17 = 6398338142173573752ULL;
unsigned int var_18 = 2854516585U;
unsigned int var_19 = 1750277478U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
