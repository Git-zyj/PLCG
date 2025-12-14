#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5359;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-21473;
signed char var_12 = (signed char)6;
int zero = 0;
unsigned long long int var_13 = 11264459562608695412ULL;
unsigned int var_14 = 2101113194U;
unsigned int var_15 = 490788288U;
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
