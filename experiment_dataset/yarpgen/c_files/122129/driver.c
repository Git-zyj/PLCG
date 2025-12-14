#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)207;
_Bool var_4 = (_Bool)0;
int var_5 = -1117262639;
short var_6 = (short)18360;
unsigned int var_8 = 1942629953U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 198604360088142642LL;
int zero = 0;
short var_15 = (short)24314;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
