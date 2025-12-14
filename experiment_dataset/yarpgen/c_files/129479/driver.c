#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3449521023U;
unsigned long long int var_1 = 16505676534997396981ULL;
long long int var_2 = 7224100163775665011LL;
long long int var_3 = 7565423921936663614LL;
short var_4 = (short)-6972;
unsigned char var_5 = (unsigned char)37;
int var_6 = 604852098;
unsigned short var_7 = (unsigned short)30826;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3906133474U;
signed char var_10 = (signed char)-103;
unsigned short var_11 = (unsigned short)10840;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10355628465143510997ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)232;
signed char var_16 = (signed char)-17;
short var_17 = (short)-13097;
long long int var_18 = 2364119462928275295LL;
unsigned short var_19 = (unsigned short)6268;
unsigned short var_20 = (unsigned short)5765;
int var_21 = 737991320;
unsigned long long int var_22 = 17306440233650592624ULL;
short var_23 = (short)23764;
int var_24 = -817067324;
signed char var_25 = (signed char)-58;
int var_26 = 2018130474;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)55;
int var_29 = 324785366;
unsigned char var_30 = (unsigned char)191;
short var_31 = (short)-1544;
short var_32 = (short)15125;
signed char var_33 = (signed char)41;
short var_34 = (short)1812;
short var_35 = (short)31329;
short var_36 = (short)7223;
unsigned char var_37 = (unsigned char)60;
long long int var_38 = -181814385022340274LL;
signed char arr_3 [19] ;
unsigned long long int arr_21 [19] ;
unsigned char arr_24 [23] [23] ;
short arr_29 [16] [16] ;
int arr_30 [16] ;
unsigned long long int arr_34 [17] ;
short arr_35 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 7527665814842596237ULL : 11083087232309482036ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)33 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_29 [i_0] [i_1] = (short)4167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = 1758905424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = 7234605453216022902ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (short)-10438;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
