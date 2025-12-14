#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 563135641;
int var_10 = 404002784;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
int var_14 = -734486133;
unsigned long long int var_15 = 14747793464213733349ULL;
unsigned short var_16 = (unsigned short)496;
short var_17 = (short)10732;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
