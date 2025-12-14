#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3593;
unsigned char var_4 = (unsigned char)187;
_Bool var_7 = (_Bool)0;
long long int var_8 = -851160648401300172LL;
unsigned char var_10 = (unsigned char)91;
long long int var_11 = -2223388955675512098LL;
short var_12 = (short)23423;
long long int var_13 = 7725717183212366635LL;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
int var_16 = 1878410772;
unsigned int var_17 = 1796095581U;
void init() {
}

void checksum() {
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
