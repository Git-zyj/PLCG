#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8497931104827313495ULL;
short var_3 = (short)24643;
int var_4 = 226670746;
unsigned char var_7 = (unsigned char)147;
short var_8 = (short)20470;
int var_9 = 28094085;
int zero = 0;
int var_14 = 1793316404;
short var_15 = (short)29926;
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
