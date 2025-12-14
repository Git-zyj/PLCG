#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)16362;
short var_8 = (short)24498;
short var_11 = (short)-506;
short var_15 = (short)-16790;
int zero = 0;
short var_18 = (short)-22641;
short var_19 = (short)6587;
short var_20 = (short)-25392;
short var_21 = (short)3192;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
