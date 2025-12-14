#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 322752520U;
short var_1 = (short)4845;
unsigned short var_2 = (unsigned short)38453;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1061247994U;
int zero = 0;
unsigned short var_17 = (unsigned short)531;
unsigned short var_18 = (unsigned short)28533;
signed char var_19 = (signed char)0;
unsigned int var_20 = 1823050841U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
