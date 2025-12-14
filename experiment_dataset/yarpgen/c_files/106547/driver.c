#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)83;
signed char var_2 = (signed char)59;
signed char var_3 = (signed char)-69;
unsigned int var_5 = 2729521745U;
unsigned char var_6 = (unsigned char)14;
short var_7 = (short)28936;
long long int var_9 = 5084335136529235927LL;
unsigned long long int var_10 = 13412664831644917252ULL;
int var_11 = -762400998;
short var_12 = (short)-3290;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)90;
int zero = 0;
unsigned char var_17 = (unsigned char)104;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4295560958129111580ULL;
short var_20 = (short)-10782;
unsigned long long int var_21 = 18226377316450184695ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 8639975717436090794ULL;
int var_24 = 568648604;
unsigned long long int var_25 = 15055297269125749623ULL;
unsigned int var_26 = 304494641U;
signed char var_27 = (signed char)58;
unsigned long long int var_28 = 1690370837123536787ULL;
unsigned long long int var_29 = 16572775070458877769ULL;
unsigned short var_30 = (unsigned short)4657;
int arr_0 [22] ;
long long int arr_1 [22] [22] ;
unsigned short arr_3 [22] ;
unsigned char arr_4 [22] [22] ;
long long int arr_5 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
_Bool arr_10 [22] [22] ;
unsigned short arr_12 [16] [16] ;
long long int arr_23 [16] [16] [16] ;
unsigned long long int arr_29 [16] [16] ;
unsigned short arr_41 [12] ;
int arr_15 [16] ;
unsigned short arr_33 [16] [16] ;
signed char arr_34 [16] [16] [16] ;
signed char arr_38 [22] ;
long long int arr_45 [12] ;
long long int arr_46 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -276423651;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 4284055164296195649LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)34841;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -3149710488879765933LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)115 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 18198334878158618280ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)52185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1110723452130854481LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_29 [i_0] [i_1] = 6833782908917887697ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_41 [i_0] = (unsigned short)61484;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 1243008291;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)8103 : (unsigned short)60878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (signed char)-54 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_45 [i_0] = 8399542862090103151LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_46 [i_0] = 8335580113636589461LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
