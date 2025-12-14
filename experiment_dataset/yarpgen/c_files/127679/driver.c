#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -394797299;
unsigned int var_1 = 1712368008U;
unsigned int var_2 = 452115495U;
unsigned long long int var_3 = 1290174601108614139ULL;
signed char var_7 = (signed char)64;
_Bool var_9 = (_Bool)0;
long long int var_12 = -5955187607907211621LL;
unsigned int var_16 = 1252855527U;
int zero = 0;
unsigned short var_17 = (unsigned short)55646;
unsigned int var_18 = 3727862133U;
unsigned int var_19 = 2912481097U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
