#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)42461;
unsigned short var_7 = (unsigned short)43014;
unsigned char var_11 = (unsigned char)240;
short var_12 = (short)-24029;
unsigned long long int var_13 = 9585468113672010493ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
signed char var_16 = (signed char)-92;
int var_17 = 1473197643;
void init() {
}

void checksum() {
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
