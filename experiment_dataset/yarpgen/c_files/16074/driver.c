#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21760;
unsigned short var_1 = (unsigned short)53979;
int var_2 = -1758063634;
int var_3 = -518687131;
signed char var_4 = (signed char)-126;
signed char var_5 = (signed char)34;
unsigned char var_6 = (unsigned char)153;
unsigned short var_7 = (unsigned short)40885;
unsigned short var_8 = (unsigned short)10238;
unsigned short var_9 = (unsigned short)30838;
unsigned int var_10 = 3669388073U;
long long int var_11 = -1169078675160964780LL;
unsigned short var_12 = (unsigned short)55579;
unsigned short var_13 = (unsigned short)660;
int zero = 0;
int var_15 = -1252274902;
int var_16 = -1822455288;
short var_17 = (short)31104;
long long int var_18 = -3620217661034977570LL;
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
