#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3052070279U;
unsigned short var_5 = (unsigned short)2007;
unsigned int var_8 = 3775597057U;
unsigned short var_12 = (unsigned short)45029;
unsigned short var_17 = (unsigned short)122;
int zero = 0;
unsigned int var_20 = 2259419126U;
short var_21 = (short)-26512;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
