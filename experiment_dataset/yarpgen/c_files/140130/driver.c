#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1808759730;
long long int var_6 = -5755877781806103544LL;
unsigned short var_8 = (unsigned short)8151;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 728100252U;
int zero = 0;
unsigned short var_15 = (unsigned short)39853;
unsigned long long int var_16 = 2962808026708129723ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10826723724819692741ULL;
void init() {
}

void checksum() {
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
