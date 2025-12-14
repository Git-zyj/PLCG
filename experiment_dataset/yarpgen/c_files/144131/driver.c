#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
int var_5 = -2035557122;
unsigned long long int var_7 = 8926272976229148299ULL;
unsigned int var_8 = 2663978256U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)168;
unsigned int var_14 = 1332622540U;
int zero = 0;
unsigned short var_15 = (unsigned short)55096;
short var_16 = (short)-2190;
signed char var_17 = (signed char)100;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)236;
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
