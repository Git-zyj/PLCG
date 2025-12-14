#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 543010148;
int var_4 = -805794678;
short var_12 = (short)-11700;
short var_13 = (short)26762;
short var_15 = (short)21939;
short var_18 = (short)9363;
int zero = 0;
unsigned short var_19 = (unsigned short)54639;
int var_20 = -2066376020;
unsigned long long int var_21 = 4526990608741640132ULL;
short var_22 = (short)17857;
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
