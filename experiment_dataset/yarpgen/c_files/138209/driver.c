#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)44471;
short var_2 = (short)4340;
unsigned char var_3 = (unsigned char)170;
unsigned short var_4 = (unsigned short)18198;
unsigned short var_5 = (unsigned short)20663;
signed char var_6 = (signed char)32;
signed char var_7 = (signed char)-108;
unsigned short var_8 = (unsigned short)28894;
short var_9 = (short)20390;
int var_10 = -417593756;
unsigned int var_11 = 1289137985U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 934427572U;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5981524651851900031LL;
unsigned int var_17 = 2967810801U;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)32117;
unsigned short var_21 = (unsigned short)57145;
unsigned short var_22 = (unsigned short)64247;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
