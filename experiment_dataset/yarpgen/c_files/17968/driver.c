#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)3006;
_Bool var_4 = (_Bool)0;
unsigned int var_11 = 4174435208U;
int var_12 = -1725848885;
unsigned long long int var_13 = 1586477929756982397ULL;
short var_14 = (short)-32173;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)18;
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
