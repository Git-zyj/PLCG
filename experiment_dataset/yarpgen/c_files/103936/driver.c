#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)5623;
unsigned long long int var_11 = 5319456107376868192ULL;
unsigned long long int var_12 = 5770547205555627598ULL;
short var_15 = (short)-19562;
int zero = 0;
short var_16 = (short)-32246;
unsigned long long int var_17 = 15804677778435802811ULL;
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
