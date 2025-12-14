#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8405353644975894405LL;
unsigned short var_4 = (unsigned short)6153;
unsigned long long int var_5 = 10207589292857492563ULL;
unsigned int var_15 = 3687340968U;
short var_16 = (short)-9722;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
short var_19 = (short)21400;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
