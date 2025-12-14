#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2365559295U;
_Bool var_1 = (_Bool)0;
int var_3 = -101576826;
unsigned char var_5 = (unsigned char)130;
signed char var_6 = (signed char)-92;
long long int var_7 = -7117186667183894152LL;
unsigned short var_9 = (unsigned short)28126;
short var_10 = (short)-5167;
unsigned int var_12 = 78729420U;
int var_13 = 1637711071;
unsigned int var_14 = 155474021U;
unsigned char var_16 = (unsigned char)113;
signed char var_17 = (signed char)74;
short var_18 = (short)21561;
unsigned int var_19 = 1542369779U;
int zero = 0;
short var_20 = (short)-19695;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)65;
unsigned int var_23 = 3445462907U;
unsigned int var_24 = 845321198U;
signed char var_25 = (signed char)-71;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)203;
unsigned char var_28 = (unsigned char)194;
_Bool var_29 = (_Bool)0;
long long int var_30 = -6449942116611144373LL;
unsigned int var_31 = 1154709817U;
signed char var_32 = (signed char)61;
_Bool var_33 = (_Bool)0;
int var_34 = 1151159927;
unsigned char var_35 = (unsigned char)75;
signed char arr_0 [13] [13] ;
int arr_3 [19] [19] ;
unsigned long long int arr_4 [19] ;
unsigned short arr_5 [19] ;
int arr_6 [19] [19] [19] ;
long long int arr_7 [19] ;
long long int arr_8 [19] ;
unsigned char arr_9 [19] [19] [19] ;
long long int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 261973567;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 12042499492209159323ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)64130;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 608234850;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 8473483407817472307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 805215910394704475LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -373814578355590390LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
