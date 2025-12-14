#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2106;
int var_2 = 1235910969;
int var_4 = 594815132;
int var_5 = 1668985046;
int var_6 = -21757036;
int var_14 = 535132773;
int zero = 0;
int var_20 = -754350233;
unsigned char var_21 = (unsigned char)140;
unsigned int var_22 = 2393659033U;
unsigned int var_23 = 3854061494U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
