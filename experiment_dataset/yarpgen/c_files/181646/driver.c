#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)47;
long long int var_4 = -920127341056414022LL;
unsigned short var_6 = (unsigned short)53896;
int var_14 = -1896062705;
int zero = 0;
short var_18 = (short)-25937;
unsigned short var_19 = (unsigned short)10901;
int var_20 = 1186923011;
unsigned int var_21 = 2123829988U;
long long int var_22 = -897071789777232816LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
