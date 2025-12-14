#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13498;
signed char var_5 = (signed char)73;
signed char var_7 = (signed char)12;
signed char var_12 = (signed char)30;
int zero = 0;
long long int var_14 = 3465020497405145046LL;
short var_15 = (short)13786;
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
