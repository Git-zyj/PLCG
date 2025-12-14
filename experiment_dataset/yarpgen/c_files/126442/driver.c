#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 904839038317644929LL;
int var_1 = 1391099324;
unsigned char var_3 = (unsigned char)131;
signed char var_5 = (signed char)35;
short var_6 = (short)6097;
int var_7 = -1204874890;
unsigned char var_8 = (unsigned char)62;
int var_9 = -2105211689;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 196325111U;
signed char var_12 = (signed char)-74;
int zero = 0;
unsigned short var_13 = (unsigned short)9294;
short var_14 = (short)7017;
unsigned long long int var_15 = 9943014655635482285ULL;
int var_16 = -1084923072;
unsigned short var_17 = (unsigned short)16711;
unsigned int var_18 = 1233205678U;
int arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
unsigned char arr_6 [18] ;
signed char arr_9 [18] [18] ;
signed char arr_2 [18] ;
unsigned short arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
unsigned short arr_12 [18] [18] [18] ;
_Bool arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -1078918995 : 520602750;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61657 : (unsigned short)37689;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)52640 : (unsigned short)37986;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)11310 : (unsigned short)30667;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
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
