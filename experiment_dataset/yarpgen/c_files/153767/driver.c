#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
int var_4 = 916697658;
signed char var_12 = (signed char)-83;
unsigned long long int var_13 = 1105175662929417758ULL;
int zero = 0;
unsigned int var_14 = 1152337981U;
_Bool var_15 = (_Bool)1;
long long int var_16 = 2489181660954197762LL;
void init() {
}

void checksum() {
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
