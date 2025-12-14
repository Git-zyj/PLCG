#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1651709101;
int var_3 = 1486836849;
unsigned short var_7 = (unsigned short)37621;
unsigned short var_11 = (unsigned short)54590;
unsigned long long int var_12 = 11521310485791670239ULL;
long long int var_15 = 3954929775505230167LL;
unsigned long long int var_17 = 8620605255097702275ULL;
int zero = 0;
unsigned int var_19 = 2508917799U;
unsigned short var_20 = (unsigned short)1503;
short var_21 = (short)-18673;
unsigned int var_22 = 756389931U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
