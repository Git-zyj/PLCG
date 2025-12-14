#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3426584878252488651LL;
unsigned char var_2 = (unsigned char)209;
unsigned int var_3 = 3003439585U;
unsigned long long int var_8 = 14438069284863875164ULL;
short var_11 = (short)-1059;
unsigned char var_13 = (unsigned char)158;
unsigned char var_17 = (unsigned char)74;
int zero = 0;
short var_19 = (short)-14610;
unsigned char var_20 = (unsigned char)211;
unsigned short var_21 = (unsigned short)63414;
unsigned long long int var_22 = 3660962422124026900ULL;
unsigned char var_23 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
