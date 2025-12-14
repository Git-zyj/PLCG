#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16168;
short var_6 = (short)15043;
short var_9 = (short)29271;
short var_10 = (short)-7623;
int zero = 0;
short var_17 = (short)21935;
short var_18 = (short)24125;
short var_19 = (short)4792;
short var_20 = (short)1200;
short var_21 = (short)13892;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
