#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned int var_5 = 543626120U;
unsigned int var_6 = 1056848124U;
signed char var_8 = (signed char)-26;
signed char var_12 = (signed char)-5;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)9745;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)15188;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4167016982440405474LL;
unsigned int var_20 = 3230445561U;
signed char var_21 = (signed char)111;
unsigned long long int var_22 = 14530776187924380868ULL;
signed char var_23 = (signed char)-3;
int var_24 = -1933244273;
unsigned char var_25 = (unsigned char)198;
short var_26 = (short)-16773;
unsigned long long int var_27 = 2143307686490108670ULL;
unsigned int var_28 = 456765088U;
long long int var_29 = 2319145297043864443LL;
signed char var_30 = (signed char)99;
int var_31 = 1446525045;
unsigned int var_32 = 2960020061U;
unsigned long long int arr_0 [23] ;
int arr_1 [23] ;
unsigned short arr_4 [22] [22] ;
unsigned int arr_6 [16] ;
signed char arr_7 [16] [16] ;
unsigned short arr_9 [16] [16] ;
long long int arr_10 [16] [16] ;
unsigned char arr_11 [16] ;
long long int arr_12 [16] [16] ;
signed char arr_14 [16] ;
_Bool arr_2 [23] [23] ;
unsigned int arr_15 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16208831089250266551ULL : 16428206654332470739ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1942181603;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1366;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3480198101U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)13562 : (unsigned short)6266;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -3770733469862324138LL : 5745826346438362504LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)134 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -5560438858685066609LL : 3738982063486115963LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 3230591481U : 1346803178U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
