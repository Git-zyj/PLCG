#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned short var_1 = (unsigned short)3373;
unsigned short var_2 = (unsigned short)44532;
long long int var_3 = 2239083485459621635LL;
long long int var_4 = 5810117304469673615LL;
unsigned short var_5 = (unsigned short)45654;
unsigned long long int var_6 = 9563975434506415811ULL;
short var_7 = (short)2960;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 991423169U;
int zero = 0;
unsigned short var_17 = (unsigned short)61405;
unsigned short var_18 = (unsigned short)41901;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 109998345U;
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
