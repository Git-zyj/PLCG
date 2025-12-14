#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -392271812247426340LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)10141;
unsigned int var_5 = 1231564709U;
short var_6 = (short)-22727;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-87;
int zero = 0;
unsigned short var_11 = (unsigned short)25384;
unsigned long long int var_12 = 12951294479670083123ULL;
int var_13 = 1027670866;
unsigned char var_14 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
