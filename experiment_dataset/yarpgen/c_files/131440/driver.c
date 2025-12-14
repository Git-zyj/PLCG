#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_12 = (signed char)-48;
short var_16 = (short)20859;
int var_19 = -1191946566;
int zero = 0;
unsigned int var_20 = 20925332U;
int var_21 = 1458701965;
int var_22 = 1635868876;
unsigned int var_23 = 2037177372U;
void init() {
}

void checksum() {
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
