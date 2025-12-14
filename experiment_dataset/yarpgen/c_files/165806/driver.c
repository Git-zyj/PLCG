#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1158213357245945407LL;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)17;
long long int var_11 = -7514219487137859268LL;
signed char var_13 = (signed char)-24;
int zero = 0;
unsigned int var_19 = 1296961763U;
unsigned int var_20 = 2148525734U;
long long int var_21 = 2793854110674650425LL;
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
