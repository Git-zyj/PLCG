#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14401678865536272705ULL;
int var_4 = -1057911967;
unsigned int var_6 = 2462145692U;
unsigned int var_10 = 1432974318U;
int zero = 0;
unsigned long long int var_14 = 1738780401363778864ULL;
unsigned long long int var_15 = 10375228622562043406ULL;
signed char var_16 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
