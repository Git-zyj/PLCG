#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20014;
short var_4 = (short)-20461;
signed char var_5 = (signed char)-35;
short var_12 = (short)-21236;
int zero = 0;
int var_18 = 1554698516;
unsigned long long int var_19 = 3688914169579199365ULL;
short var_20 = (short)-16805;
void init() {
}

void checksum() {
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
