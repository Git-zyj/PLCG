#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35792;
_Bool var_1 = (_Bool)1;
long long int var_2 = 5796497477527472632LL;
long long int var_3 = -353000182723502068LL;
unsigned long long int var_4 = 14085268302989215265ULL;
long long int var_5 = -201705852729571100LL;
unsigned long long int var_6 = 11490713318944454038ULL;
signed char var_8 = (signed char)-74;
short var_9 = (short)-22525;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)3;
unsigned short var_12 = (unsigned short)16284;
unsigned char var_14 = (unsigned char)245;
signed char var_15 = (signed char)52;
unsigned int var_16 = 1903555655U;
int zero = 0;
long long int var_18 = -8317752456935685140LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)67;
unsigned long long int var_21 = 13510214232011405229ULL;
short var_22 = (short)-11397;
short var_23 = (short)-8291;
short var_24 = (short)-14509;
signed char var_25 = (signed char)30;
unsigned short var_26 = (unsigned short)31561;
unsigned long long int var_27 = 9068775990017992750ULL;
unsigned short var_28 = (unsigned short)24689;
unsigned int var_29 = 2702593419U;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] [16] ;
short arr_2 [16] ;
_Bool arr_3 [16] [16] [16] ;
signed char arr_4 [16] [16] [16] ;
unsigned long long int arr_8 [16] ;
long long int arr_9 [16] [16] ;
signed char arr_12 [16] [16] ;
unsigned char arr_5 [16] [16] ;
int arr_10 [16] [16] [16] ;
short arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-30904 : (short)5272;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)71 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 7110810604150561945ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -3213008446207665118LL : -4739802121832073434LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)66 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 901626214 : -131094619;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4126 : (short)18965;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
