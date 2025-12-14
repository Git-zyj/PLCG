#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 529828373;
int var_4 = 2144582516;
int var_8 = 2014664519;
unsigned int var_10 = 99983100U;
long long int var_11 = 6621603580238123600LL;
unsigned short var_12 = (unsigned short)2100;
int zero = 0;
signed char var_16 = (signed char)10;
int var_17 = 1147348703;
void init() {
}

void checksum() {
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
