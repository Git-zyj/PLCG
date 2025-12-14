#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3825306577U;
unsigned int var_1 = 486770209U;
int var_6 = -207864265;
signed char var_9 = (signed char)17;
short var_10 = (short)-29418;
int zero = 0;
short var_11 = (short)-3642;
unsigned int var_12 = 1591229209U;
signed char var_13 = (signed char)-46;
signed char var_14 = (signed char)99;
short var_15 = (short)-12965;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
