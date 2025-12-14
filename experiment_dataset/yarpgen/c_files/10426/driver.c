#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-11744;
signed char var_11 = (signed char)-53;
unsigned short var_13 = (unsigned short)18623;
int zero = 0;
unsigned int var_16 = 3236222641U;
int var_17 = -697101241;
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
