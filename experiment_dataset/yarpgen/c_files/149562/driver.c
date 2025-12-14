#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)38;
unsigned short var_8 = (unsigned short)21947;
unsigned int var_9 = 106529373U;
unsigned short var_10 = (unsigned short)24247;
int var_11 = 926311008;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
unsigned short var_14 = (unsigned short)50321;
unsigned char var_15 = (unsigned char)197;
short var_16 = (short)-31813;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
