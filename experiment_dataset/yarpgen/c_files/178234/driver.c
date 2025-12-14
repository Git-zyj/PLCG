#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned char var_1 = (unsigned char)248;
unsigned int var_3 = 162279406U;
short var_4 = (short)-11700;
signed char var_5 = (signed char)118;
unsigned char var_6 = (unsigned char)204;
unsigned int var_9 = 19516223U;
int zero = 0;
unsigned long long int var_10 = 12061366018167301647ULL;
unsigned long long int var_11 = 9381577279654418266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
