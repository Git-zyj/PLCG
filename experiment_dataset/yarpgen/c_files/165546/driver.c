#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 787363342U;
unsigned short var_4 = (unsigned short)13878;
short var_5 = (short)-17958;
unsigned long long int var_6 = 98557301172441899ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)28265;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = 378675154;
unsigned short var_16 = (unsigned short)24854;
int zero = 0;
unsigned short var_17 = (unsigned short)49706;
unsigned char var_18 = (unsigned char)173;
int var_19 = -2100210314;
signed char var_20 = (signed char)-20;
unsigned int var_21 = 179765191U;
signed char var_22 = (signed char)-93;
short var_23 = (short)-8958;
int var_24 = 653862026;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1531039689U;
unsigned int var_27 = 2906131876U;
unsigned long long int var_28 = 14880317786119822671ULL;
unsigned int var_29 = 3717627451U;
short var_30 = (short)16952;
signed char var_31 = (signed char)-13;
int var_32 = -1612739960;
unsigned short var_33 = (unsigned short)52486;
unsigned char var_34 = (unsigned char)56;
_Bool var_35 = (_Bool)0;
int var_36 = -277189015;
unsigned int var_37 = 2777584962U;
unsigned short var_38 = (unsigned short)6922;
signed char arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
int arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned char arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
_Bool arr_7 [18] [18] [18] [18] ;
short arr_9 [18] [18] [18] ;
signed char arr_10 [18] [18] ;
long long int arr_12 [18] [18] ;
unsigned int arr_15 [18] ;
int arr_17 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1612772234 : 715514842;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2609248056U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)131 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)26829 : (unsigned short)57395;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-5041;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2951273615088015095LL : 747597946904804254LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1498199047U : 1651904532U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 665580379;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
