#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16032;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)20342;
unsigned short var_7 = (unsigned short)61980;
unsigned char var_8 = (unsigned char)84;
unsigned long long int var_9 = 14810019853731607930ULL;
unsigned int var_10 = 2356513324U;
unsigned short var_12 = (unsigned short)35465;
unsigned short var_13 = (unsigned short)57597;
unsigned short var_17 = (unsigned short)21462;
int zero = 0;
unsigned long long int var_18 = 17774695418314111344ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
