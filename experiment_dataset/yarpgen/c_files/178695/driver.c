#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)11792;
unsigned int var_6 = 3516976165U;
short var_7 = (short)17802;
int zero = 0;
unsigned long long int var_16 = 11574771549900433341ULL;
unsigned int var_17 = 2295332295U;
void init() {
}

void checksum() {
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
