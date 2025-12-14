#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 413588667U;
long long int var_2 = -812599339088595392LL;
unsigned long long int var_10 = 18195670445732725865ULL;
unsigned int var_13 = 757738574U;
int zero = 0;
signed char var_15 = (signed char)17;
short var_16 = (short)-15315;
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
