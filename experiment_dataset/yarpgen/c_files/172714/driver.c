#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7924080640492119696LL;
unsigned long long int var_2 = 11271829081075492703ULL;
short var_10 = (short)-20342;
long long int var_11 = -283489380757900572LL;
unsigned short var_12 = (unsigned short)52009;
int zero = 0;
unsigned short var_14 = (unsigned short)11151;
short var_15 = (short)26006;
unsigned short var_16 = (unsigned short)41979;
short var_17 = (short)26833;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
