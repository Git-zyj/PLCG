#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3365125254U;
long long int var_3 = -407917208031521489LL;
unsigned long long int var_4 = 16998051438286730351ULL;
int zero = 0;
long long int var_10 = -7124835890830986338LL;
unsigned int var_11 = 2664627717U;
unsigned int var_12 = 2719819951U;
int var_13 = 311078935;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
