#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19241;
unsigned int var_8 = 3114280526U;
short var_10 = (short)16283;
short var_11 = (short)-11849;
unsigned int var_12 = 2728166479U;
int zero = 0;
int var_14 = -1762667731;
short var_15 = (short)-7902;
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
