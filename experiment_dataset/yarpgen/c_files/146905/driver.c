#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)20744;
long long int var_11 = 3972363034901048505LL;
long long int var_12 = -2073949769690166351LL;
long long int var_14 = 2058801225467939310LL;
int zero = 0;
unsigned int var_15 = 2243623623U;
long long int var_16 = 2013853461407442625LL;
unsigned char var_17 = (unsigned char)241;
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
