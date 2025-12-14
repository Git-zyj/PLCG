#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1513242342;
long long int var_9 = 6590985174016107872LL;
unsigned int var_10 = 776025222U;
unsigned char var_12 = (unsigned char)135;
short var_14 = (short)32557;
int zero = 0;
signed char var_16 = (signed char)-81;
short var_17 = (short)-4405;
short var_18 = (short)-22760;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
