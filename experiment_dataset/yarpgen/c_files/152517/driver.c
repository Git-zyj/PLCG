#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
unsigned short var_4 = (unsigned short)15912;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7628126093497322082ULL;
unsigned long long int var_12 = 18211791553193462325ULL;
unsigned char var_14 = (unsigned char)140;
long long int var_15 = -1649979069568732678LL;
long long int var_17 = 8935531548659208578LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-32060;
int zero = 0;
unsigned int var_20 = 555687165U;
unsigned short var_21 = (unsigned short)46989;
unsigned int var_22 = 1202956819U;
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
