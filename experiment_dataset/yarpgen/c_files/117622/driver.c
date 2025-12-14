#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)30053;
signed char var_9 = (signed char)-56;
unsigned int var_10 = 4113484906U;
signed char var_11 = (signed char)-63;
short var_12 = (short)-17058;
unsigned char var_14 = (unsigned char)64;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned short var_20 = (unsigned short)28872;
signed char var_21 = (signed char)48;
unsigned short var_22 = (unsigned short)6665;
unsigned short var_23 = (unsigned short)53074;
unsigned char var_24 = (unsigned char)183;
int var_25 = -1409056264;
short var_26 = (short)12099;
signed char var_27 = (signed char)1;
signed char var_28 = (signed char)85;
signed char var_29 = (signed char)-19;
signed char var_30 = (signed char)90;
int var_31 = 1917171792;
unsigned int var_32 = 1464956168U;
unsigned int arr_0 [24] [24] ;
unsigned int arr_4 [11] ;
signed char arr_22 [12] [12] ;
long long int arr_29 [12] [12] [12] ;
signed char arr_30 [12] [12] ;
unsigned short arr_3 [24] ;
_Bool arr_6 [11] ;
unsigned short arr_20 [11] [11] ;
int arr_24 [12] [12] ;
signed char arr_25 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 2269591750U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 734182063U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 1496275139965776969LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)55164;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21839 : (unsigned short)48285;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = -637643988;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (signed char)12;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
