#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 381341714U;
int var_7 = 354096597;
unsigned short var_14 = (unsigned short)38363;
unsigned long long int var_17 = 13627301802574153757ULL;
int zero = 0;
short var_20 = (short)21183;
short var_21 = (short)18269;
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
