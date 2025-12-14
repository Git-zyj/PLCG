#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 3919998208594306222LL;
unsigned short var_3 = (unsigned short)347;
unsigned int var_5 = 1149729740U;
unsigned int var_6 = 1160785140U;
unsigned short var_7 = (unsigned short)14354;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2952203195U;
unsigned int var_14 = 84797871U;
unsigned long long int var_15 = 11811073051044572776ULL;
unsigned int var_16 = 4079867843U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
