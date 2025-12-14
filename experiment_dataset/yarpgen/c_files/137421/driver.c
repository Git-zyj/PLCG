#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)245;
short var_2 = (short)23852;
short var_3 = (short)-31921;
unsigned char var_5 = (unsigned char)147;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_10 = 6701229766761959316LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7380305685149953720ULL;
signed char var_13 = (signed char)-117;
short var_15 = (short)2210;
int zero = 0;
signed char var_18 = (signed char)53;
unsigned long long int var_19 = 2952173091954503520ULL;
unsigned short var_20 = (unsigned short)21655;
unsigned long long int var_21 = 14849037093501162255ULL;
unsigned char var_22 = (unsigned char)152;
unsigned long long int var_23 = 12205717882058786698ULL;
short var_24 = (short)-1177;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
