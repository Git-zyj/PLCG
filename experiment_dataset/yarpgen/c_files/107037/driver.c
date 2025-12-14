#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 4968074083670563921ULL;
unsigned char var_5 = (unsigned char)28;
signed char var_6 = (signed char)12;
short var_7 = (short)22263;
unsigned long long int var_9 = 11633381684544757724ULL;
unsigned char var_10 = (unsigned char)90;
int var_12 = 1188497878;
unsigned char var_13 = (unsigned char)18;
unsigned char var_16 = (unsigned char)69;
unsigned char var_17 = (unsigned char)207;
long long int var_18 = 7020127970670114762LL;
int zero = 0;
unsigned char var_19 = (unsigned char)161;
unsigned char var_20 = (unsigned char)81;
short var_21 = (short)22616;
signed char var_22 = (signed char)-116;
_Bool arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
