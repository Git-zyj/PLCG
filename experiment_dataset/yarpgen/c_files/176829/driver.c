#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10318;
unsigned int var_10 = 1545655853U;
unsigned short var_15 = (unsigned short)8205;
int zero = 0;
unsigned int var_16 = 3017048473U;
unsigned short var_17 = (unsigned short)51750;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
