#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -591534805;
signed char var_7 = (signed char)-33;
signed char var_11 = (signed char)3;
short var_16 = (short)12772;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = 7332036662509150265LL;
unsigned long long int var_20 = 8014717030620716551ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
