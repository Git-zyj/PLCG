#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)3;
_Bool var_10 = (_Bool)0;
short var_11 = (short)9256;
unsigned short var_15 = (unsigned short)52925;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = 331514749;
int var_21 = 1409209497;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
