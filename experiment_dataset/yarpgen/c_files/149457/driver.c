#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 829075574;
unsigned short var_2 = (unsigned short)63653;
unsigned int var_8 = 3834732952U;
_Bool var_10 = (_Bool)1;
short var_12 = (short)166;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)28473;
unsigned int var_16 = 2445868192U;
unsigned int var_17 = 630597049U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
