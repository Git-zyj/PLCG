#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 375373331U;
unsigned long long int var_5 = 13167698231436603995ULL;
unsigned short var_6 = (unsigned short)39597;
unsigned short var_7 = (unsigned short)9853;
signed char var_8 = (signed char)44;
unsigned long long int var_10 = 12680545792575293901ULL;
int var_11 = -1637208311;
_Bool var_14 = (_Bool)1;
long long int var_16 = -2210293840609650052LL;
int zero = 0;
int var_17 = 32553287;
unsigned short var_18 = (unsigned short)7131;
void init() {
}

void checksum() {
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
