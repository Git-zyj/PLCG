#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 1198357456;
short var_5 = (short)31334;
short var_6 = (short)29418;
unsigned char var_8 = (unsigned char)239;
unsigned short var_9 = (unsigned short)37062;
int var_12 = 1125714535;
int zero = 0;
unsigned char var_14 = (unsigned char)165;
short var_15 = (short)-20187;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
