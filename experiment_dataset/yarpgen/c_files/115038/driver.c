#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4028;
short var_4 = (short)24278;
short var_12 = (short)-25559;
short var_14 = (short)-4079;
int zero = 0;
short var_17 = (short)5187;
short var_18 = (short)2251;
short var_19 = (short)16918;
short var_20 = (short)-7622;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
