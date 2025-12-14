#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5205;
unsigned short var_1 = (unsigned short)47470;
unsigned short var_4 = (unsigned short)49582;
unsigned int var_7 = 2221731922U;
long long int var_8 = -6961238759501569533LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)245;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1074632487;
unsigned long long int var_16 = 167339829965672698ULL;
void init() {
}

void checksum() {
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
