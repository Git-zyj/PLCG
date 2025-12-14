#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned short var_3 = (unsigned short)63885;
unsigned short var_6 = (unsigned short)51400;
unsigned int var_7 = 3178593788U;
signed char var_11 = (signed char)84;
int zero = 0;
unsigned short var_13 = (unsigned short)12185;
int var_14 = 364300977;
int var_15 = -1667434908;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
