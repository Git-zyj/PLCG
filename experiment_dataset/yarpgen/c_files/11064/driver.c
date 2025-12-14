#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
short var_1 = (short)-32370;
long long int var_3 = -1739545531944747118LL;
signed char var_4 = (signed char)-79;
unsigned short var_5 = (unsigned short)54281;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2420314436U;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)113;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1738553741U;
signed char var_18 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
