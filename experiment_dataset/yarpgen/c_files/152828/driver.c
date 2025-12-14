#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)17797;
unsigned short var_10 = (unsigned short)48375;
short var_12 = (short)-13541;
long long int var_14 = -5513449342756558934LL;
int zero = 0;
signed char var_17 = (signed char)-117;
long long int var_18 = 4335891687248827240LL;
void init() {
}

void checksum() {
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
