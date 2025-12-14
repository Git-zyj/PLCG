#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12678;
unsigned int var_1 = 2217903320U;
unsigned long long int var_2 = 5003636981188922484ULL;
signed char var_3 = (signed char)63;
long long int var_4 = -2051577544937344435LL;
short var_5 = (short)-21630;
unsigned short var_6 = (unsigned short)46658;
signed char var_8 = (signed char)-29;
unsigned int var_9 = 755654257U;
signed char var_10 = (signed char)51;
unsigned short var_12 = (unsigned short)54453;
signed char var_13 = (signed char)-32;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-1;
unsigned long long int var_17 = 15140810731429706488ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
int var_19 = 743978307;
signed char var_20 = (signed char)-15;
void init() {
}

void checksum() {
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
