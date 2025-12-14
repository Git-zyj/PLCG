#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)8365;
unsigned int var_3 = 592148363U;
signed char var_4 = (signed char)16;
unsigned short var_7 = (unsigned short)7120;
int zero = 0;
unsigned short var_11 = (unsigned short)17947;
unsigned long long int var_12 = 587256362331621005ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 2043858583;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
