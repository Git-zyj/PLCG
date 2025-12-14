#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1866741495U;
long long int var_5 = 4014122400422482358LL;
unsigned short var_7 = (unsigned short)39593;
unsigned short var_8 = (unsigned short)38807;
unsigned int var_9 = 3094028043U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14799430177134923001ULL;
int zero = 0;
unsigned int var_12 = 1433375334U;
unsigned int var_13 = 826270005U;
int var_14 = -227522344;
signed char var_15 = (signed char)79;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
