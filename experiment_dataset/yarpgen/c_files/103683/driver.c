#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31238;
_Bool var_8 = (_Bool)1;
short var_9 = (short)12443;
int var_10 = 1766679558;
_Bool var_11 = (_Bool)0;
long long int var_14 = 462658418557835769LL;
unsigned long long int var_15 = 12210740583964509774ULL;
int zero = 0;
unsigned int var_16 = 3682745988U;
unsigned int var_17 = 3540130043U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
