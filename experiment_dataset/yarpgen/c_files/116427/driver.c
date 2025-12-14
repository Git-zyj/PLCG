#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 14342191294910413634ULL;
unsigned long long int var_16 = 9087901163742493134ULL;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned long long int var_19 = 3454957346741687149ULL;
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
