#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 381107529U;
unsigned short var_3 = (unsigned short)50825;
unsigned short var_11 = (unsigned short)12193;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 903619992;
unsigned int var_17 = 3108337384U;
int var_18 = -920703023;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
