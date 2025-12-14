#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -843039912;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_11 = (short)28724;
unsigned int var_14 = 1725042758U;
int zero = 0;
unsigned short var_17 = (unsigned short)24702;
signed char var_18 = (signed char)-45;
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
