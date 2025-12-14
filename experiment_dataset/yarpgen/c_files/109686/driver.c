#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -2147268557;
unsigned int var_4 = 3418212130U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)56635;
unsigned int var_9 = 2895618950U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)55249;
unsigned short var_13 = (unsigned short)39673;
unsigned int var_14 = 2119134061U;
int var_15 = 563123361;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
