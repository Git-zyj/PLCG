#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
long long int var_4 = 2912581056757988614LL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)91;
short var_10 = (short)4590;
long long int var_12 = 3724042255998718949LL;
unsigned int var_13 = 3862630453U;
short var_14 = (short)-8661;
long long int var_15 = -4785190845742944383LL;
unsigned char var_16 = (unsigned char)108;
unsigned short var_17 = (unsigned short)40789;
unsigned long long int var_18 = 12098591849002410733ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30030;
void init() {
}

void checksum() {
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
