#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8444;
unsigned short var_3 = (unsigned short)65171;
short var_4 = (short)16323;
long long int var_7 = 460703165457301274LL;
long long int var_10 = -8247717199438170179LL;
unsigned short var_11 = (unsigned short)5634;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
unsigned long long int var_15 = 1716097033296989245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
