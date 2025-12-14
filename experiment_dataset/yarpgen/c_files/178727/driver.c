#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51742;
signed char var_1 = (signed char)97;
int var_3 = 760929919;
short var_4 = (short)200;
short var_5 = (short)30267;
_Bool var_7 = (_Bool)1;
long long int var_13 = -7891384241019440877LL;
short var_14 = (short)-9031;
int zero = 0;
long long int var_15 = -7605599537025073960LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2133440812U;
int var_18 = 1109014813;
short var_19 = (short)4661;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
