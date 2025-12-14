#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)444;
short var_5 = (short)2528;
short var_6 = (short)21167;
unsigned int var_8 = 3268901304U;
unsigned int var_11 = 158751260U;
unsigned int var_12 = 2912488210U;
int zero = 0;
short var_14 = (short)-28480;
short var_15 = (short)-608;
short var_16 = (short)-6061;
void init() {
}

void checksum() {
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
