#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2877450560012970526ULL;
short var_1 = (short)2607;
unsigned long long int var_5 = 14510464681365391178ULL;
_Bool var_15 = (_Bool)1;
int var_16 = 255893745;
unsigned int var_18 = 2607381227U;
long long int var_19 = 6334779819453764370LL;
int zero = 0;
int var_20 = -1860616761;
int var_21 = -470583946;
unsigned char var_22 = (unsigned char)83;
void init() {
}

void checksum() {
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
