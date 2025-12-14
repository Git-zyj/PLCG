#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13398;
unsigned long long int var_6 = 5602958654134025946ULL;
unsigned int var_8 = 3384842753U;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-68;
unsigned long long int var_16 = 1882991353372027033ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
