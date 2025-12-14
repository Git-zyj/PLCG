#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-11745;
unsigned short var_8 = (unsigned short)13597;
int zero = 0;
unsigned long long int var_12 = 2575840782614594098ULL;
unsigned short var_13 = (unsigned short)30041;
short var_14 = (short)24335;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
