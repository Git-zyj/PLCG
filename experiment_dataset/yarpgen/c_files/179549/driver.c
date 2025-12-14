#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1879463519;
long long int var_11 = -8400621714120638481LL;
signed char var_14 = (signed char)-31;
int zero = 0;
long long int var_15 = 5806790156171223006LL;
long long int var_16 = -7074538768093500249LL;
void init() {
}

void checksum() {
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
