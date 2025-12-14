#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
int var_1 = -1082988778;
unsigned char var_2 = (unsigned char)0;
short var_6 = (short)-3597;
int zero = 0;
unsigned short var_13 = (unsigned short)5552;
short var_14 = (short)-15002;
unsigned long long int var_15 = 8635071003597682324ULL;
long long int var_16 = 3062774453812445127LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
