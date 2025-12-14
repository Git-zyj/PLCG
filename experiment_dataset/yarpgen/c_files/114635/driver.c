#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54714;
int var_2 = 325425866;
unsigned int var_3 = 874327479U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2348118569U;
unsigned char var_6 = (unsigned char)142;
unsigned int var_7 = 1861399905U;
unsigned short var_8 = (unsigned short)40359;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-12247;
unsigned short var_12 = (unsigned short)24462;
unsigned short var_14 = (unsigned short)763;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7497926196778422768LL;
int zero = 0;
unsigned short var_18 = (unsigned short)16004;
signed char var_19 = (signed char)18;
int var_20 = -1111630309;
unsigned char var_21 = (unsigned char)225;
int var_22 = 913108882;
int var_23 = 26469364;
short var_24 = (short)31328;
short var_25 = (short)1494;
unsigned short arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
unsigned short arr_2 [25] ;
short arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
_Bool arr_6 [25] [25] [25] ;
int arr_7 [25] [25] [25] ;
unsigned short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)13798;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 654892446U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)50587;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)18679;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)31393;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)15478;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 215492233 : 1590534659;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)15497;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
