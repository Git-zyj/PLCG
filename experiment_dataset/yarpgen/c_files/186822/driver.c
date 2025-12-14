#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1668254366U;
signed char var_5 = (signed char)126;
unsigned int var_7 = 854144686U;
short var_9 = (short)30414;
short var_10 = (short)-19006;
unsigned int var_11 = 1300312780U;
int zero = 0;
unsigned int var_12 = 563210846U;
signed char var_13 = (signed char)-74;
unsigned int var_14 = 4021498177U;
signed char var_15 = (signed char)-34;
void init() {
}

void checksum() {
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
