#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 222946290U;
unsigned int var_4 = 1384290754U;
signed char var_5 = (signed char)7;
unsigned short var_6 = (unsigned short)21275;
int zero = 0;
signed char var_10 = (signed char)-91;
signed char var_11 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
