#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2043213026;
signed char var_7 = (signed char)113;
short var_11 = (short)-1727;
int zero = 0;
unsigned char var_13 = (unsigned char)163;
short var_14 = (short)10838;
short var_15 = (short)-23438;
signed char var_16 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
