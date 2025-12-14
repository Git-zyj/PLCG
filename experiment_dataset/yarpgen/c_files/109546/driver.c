#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6742;
short var_6 = (short)-5253;
short var_14 = (short)-25717;
short var_18 = (short)1672;
int zero = 0;
short var_20 = (short)24707;
short var_21 = (short)-25756;
short var_22 = (short)6038;
short var_23 = (short)775;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
