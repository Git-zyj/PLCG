#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3363192059U;
unsigned short var_1 = (unsigned short)29915;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2291280624181422172LL;
unsigned int var_10 = 1035731811U;
int zero = 0;
unsigned int var_14 = 1497849954U;
unsigned short var_15 = (unsigned short)18106;
long long int var_16 = -2743482622597474196LL;
short var_17 = (short)16804;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
