#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 964553068672958116LL;
long long int var_5 = 456538064655563251LL;
long long int var_6 = 6988146494659296622LL;
long long int var_9 = 8633718645093407649LL;
unsigned short var_12 = (unsigned short)30960;
unsigned char var_13 = (unsigned char)125;
signed char var_15 = (signed char)82;
int zero = 0;
unsigned int var_16 = 2948158084U;
signed char var_17 = (signed char)-48;
signed char var_18 = (signed char)28;
int var_19 = -964081200;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)1;
unsigned int var_22 = 397194663U;
short arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
signed char arr_2 [15] [15] ;
_Bool arr_4 [15] ;
_Bool arr_7 [11] ;
signed char arr_9 [11] ;
short arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-18440;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (short)16796;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
