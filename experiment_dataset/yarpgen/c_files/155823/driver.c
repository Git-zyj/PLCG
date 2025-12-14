#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3555;
unsigned char var_5 = (unsigned char)185;
unsigned int var_8 = 3489379460U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1831663823412337685ULL;
unsigned short var_13 = (unsigned short)17679;
int zero = 0;
unsigned int var_16 = 4082790541U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-21263;
unsigned short var_19 = (unsigned short)29415;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
