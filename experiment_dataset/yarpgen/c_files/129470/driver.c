#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)250;
int var_7 = 1735079365;
int zero = 0;
unsigned short var_12 = (unsigned short)45534;
signed char var_13 = (signed char)53;
unsigned char var_14 = (unsigned char)84;
void init() {
}

void checksum() {
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
