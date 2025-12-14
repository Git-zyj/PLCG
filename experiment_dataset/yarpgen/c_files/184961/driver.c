#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4111869082U;
_Bool var_10 = (_Bool)1;
unsigned short var_15 = (unsigned short)285;
int zero = 0;
unsigned long long int var_16 = 4672768429776239325ULL;
unsigned long long int var_17 = 4406362524467732353ULL;
long long int var_18 = -62491460195949788LL;
unsigned short var_19 = (unsigned short)33945;
signed char var_20 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
