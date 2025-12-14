#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1953125798;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-28648;
short var_4 = (short)-19716;
long long int var_6 = 1371966293980571075LL;
short var_8 = (short)8858;
int zero = 0;
unsigned int var_12 = 3773588922U;
int var_13 = 1368518343;
long long int var_14 = 7897192452028682312LL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
