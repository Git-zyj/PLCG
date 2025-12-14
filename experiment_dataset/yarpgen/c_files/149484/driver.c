#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12103;
_Bool var_1 = (_Bool)1;
long long int var_3 = -262749554743341013LL;
signed char var_4 = (signed char)-58;
unsigned long long int var_5 = 3908314493776416809ULL;
unsigned long long int var_6 = 4475784771760050052ULL;
long long int var_7 = -8841349079056894050LL;
unsigned long long int var_8 = 3624229866632904159ULL;
short var_9 = (short)11885;
unsigned long long int var_11 = 10344192320191650467ULL;
int var_12 = -267928922;
int var_13 = -1935782623;
int zero = 0;
unsigned int var_15 = 1440919031U;
unsigned short var_16 = (unsigned short)40059;
unsigned char var_17 = (unsigned char)201;
unsigned long long int var_18 = 4473916629519014895ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
