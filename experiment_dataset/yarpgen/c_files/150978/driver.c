#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)79;
unsigned long long int var_10 = 6157580718588720608ULL;
long long int var_13 = 5489660404444960805LL;
int var_14 = -1711372985;
short var_16 = (short)-7402;
int zero = 0;
long long int var_19 = -6961440251197838667LL;
_Bool var_20 = (_Bool)1;
int var_21 = -2140652722;
unsigned int var_22 = 503022984U;
unsigned int var_23 = 2509701625U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
