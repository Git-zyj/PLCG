#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17435334322714899433ULL;
int var_1 = 383160063;
long long int var_5 = 1191648207543459223LL;
unsigned long long int var_10 = 1032552800764998111ULL;
unsigned long long int var_13 = 10292389266935165435ULL;
int zero = 0;
unsigned long long int var_19 = 1320311627882387120ULL;
long long int var_20 = -8395374782896132345LL;
unsigned int var_21 = 48512954U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
