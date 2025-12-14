#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-21331;
unsigned char var_5 = (unsigned char)160;
unsigned short var_8 = (unsigned short)3288;
unsigned long long int var_10 = 3298418853726645903ULL;
int zero = 0;
signed char var_11 = (signed char)125;
unsigned int var_12 = 2008083542U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
