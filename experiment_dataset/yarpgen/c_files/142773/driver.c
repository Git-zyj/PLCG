#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22715;
short var_2 = (short)29211;
short var_3 = (short)-20648;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)20227;
long long int var_10 = 946525222413906507LL;
unsigned long long int var_11 = 16894823451153560302ULL;
long long int var_12 = -312191456506493949LL;
short var_13 = (short)12367;
short var_14 = (short)31227;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51734;
unsigned char var_19 = (unsigned char)82;
unsigned long long int var_20 = 14864321449302346629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
