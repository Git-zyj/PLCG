#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
short var_7 = (short)-7721;
short var_8 = (short)-9931;
long long int var_13 = -4707965310991612196LL;
int zero = 0;
short var_14 = (short)-15019;
short var_15 = (short)-30824;
short var_16 = (short)20964;
long long int var_17 = 1898208247453098983LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
