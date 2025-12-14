#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)16582;
unsigned int var_8 = 1523623420U;
unsigned short var_16 = (unsigned short)43266;
short var_17 = (short)-22337;
int zero = 0;
short var_20 = (short)-24368;
signed char var_21 = (signed char)81;
long long int var_22 = -2935386373439272898LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
