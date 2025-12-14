#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)178;
unsigned char var_21 = (unsigned char)119;
unsigned char var_22 = (unsigned char)227;
unsigned long long int var_23 = 7034318354538180449ULL;
int var_24 = 1282684074;
_Bool var_25 = (_Bool)1;
int var_26 = -389634383;
short var_27 = (short)15970;
unsigned int var_28 = 3086966995U;
long long int var_29 = 2769441141815215030LL;
unsigned int var_30 = 2608208712U;
_Bool var_31 = (_Bool)1;
_Bool var_32 = (_Bool)1;
unsigned short var_33 = (unsigned short)42042;
short arr_0 [15] ;
short arr_1 [15] ;
_Bool arr_2 [15] ;
short arr_3 [15] ;
unsigned int arr_5 [15] [15] ;
_Bool arr_6 [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] ;
signed char arr_14 [13] [13] ;
long long int arr_15 [13] ;
_Bool arr_17 [13] [13] ;
unsigned int arr_20 [18] ;
short arr_21 [18] ;
unsigned long long int arr_4 [15] [15] ;
unsigned long long int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-23251;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)10398;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)24448;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2190362764U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5110382118388428830ULL : 15444227909393975108ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -8151043910993708875LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 4263231361U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (short)25979;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1009257094336446028ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 16343740149434036898ULL : 5696920189009086952ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
