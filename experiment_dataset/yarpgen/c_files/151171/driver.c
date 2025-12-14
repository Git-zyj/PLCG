#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-125;
int var_7 = -1751958285;
unsigned int var_8 = 3358362693U;
short var_10 = (short)16006;
unsigned int var_13 = 3770309552U;
int zero = 0;
int var_15 = -826037574;
unsigned int var_16 = 710232763U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
