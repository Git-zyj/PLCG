#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_14 = 1533431872;
int zero = 0;
unsigned int var_18 = 2211573312U;
long long int var_19 = 1204694762306309872LL;
int var_20 = -483645116;
void init() {
}

void checksum() {
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
