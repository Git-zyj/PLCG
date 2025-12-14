#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
unsigned long long int var_2 = 5017835861293065653ULL;
unsigned int var_5 = 390859611U;
int zero = 0;
short var_10 = (short)6498;
unsigned long long int var_11 = 14053438834315569650ULL;
int var_12 = 1257606876;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
