#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)58;
long long int var_14 = 1378370373498381754LL;
int zero = 0;
short var_16 = (short)-22013;
signed char var_17 = (signed char)-94;
long long int var_18 = 2959838379714262549LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
