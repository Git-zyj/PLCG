#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)38;
long long int var_5 = 8152724730924147863LL;
unsigned long long int var_6 = 7087301615519354587ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 555729045U;
int zero = 0;
int var_11 = 1048197029;
unsigned int var_12 = 2689414535U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
