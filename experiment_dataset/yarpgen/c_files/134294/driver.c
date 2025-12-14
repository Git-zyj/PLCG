#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 823076655;
unsigned short var_1 = (unsigned short)60117;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)99;
int var_5 = 393928622;
unsigned short var_6 = (unsigned short)6350;
unsigned short var_7 = (unsigned short)11138;
unsigned int var_9 = 1376639932U;
int var_10 = 1156044676;
unsigned char var_11 = (unsigned char)149;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)3730;
unsigned char var_14 = (unsigned char)104;
short var_15 = (short)-28266;
unsigned short var_16 = (unsigned short)23668;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-5;
unsigned int var_19 = 4091443302U;
int var_20 = 1719439126;
_Bool var_21 = (_Bool)1;
int var_22 = -1169668640;
signed char arr_1 [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_6 [10] [10] ;
unsigned short arr_9 [18] [18] ;
unsigned int arr_10 [18] ;
_Bool arr_11 [18] [18] ;
unsigned short arr_12 [18] [18] ;
signed char arr_14 [19] [19] ;
unsigned char arr_15 [19] [19] ;
_Bool arr_7 [10] ;
int arr_8 [10] ;
signed char arr_13 [18] ;
int arr_16 [19] ;
unsigned long long int arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)53354;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 2809459381U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)8720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -366590879;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1690128896;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 13332895986107386215ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
