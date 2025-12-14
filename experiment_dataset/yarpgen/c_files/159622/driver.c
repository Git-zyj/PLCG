#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1482745811;
unsigned char var_2 = (unsigned char)79;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 14633747148830091680ULL;
long long int var_12 = 4196148792044247786LL;
unsigned short var_13 = (unsigned short)12359;
int zero = 0;
unsigned int var_14 = 200541411U;
unsigned short var_15 = (unsigned short)53736;
unsigned char var_16 = (unsigned char)234;
long long int var_17 = -8453331119197301576LL;
unsigned int var_18 = 464492896U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
