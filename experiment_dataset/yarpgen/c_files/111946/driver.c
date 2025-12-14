#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)122;
long long int var_4 = -1257725536901680541LL;
signed char var_5 = (signed char)-43;
long long int var_9 = 6347106653070551163LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)222;
unsigned int var_14 = 4130023531U;
short var_16 = (short)-331;
signed char var_18 = (signed char)111;
int zero = 0;
long long int var_19 = -4036012903131086492LL;
signed char var_20 = (signed char)-107;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)81;
unsigned char var_23 = (unsigned char)156;
unsigned char var_24 = (unsigned char)187;
long long int var_25 = 3041388727512335622LL;
signed char var_26 = (signed char)-42;
signed char var_27 = (signed char)-124;
unsigned short var_28 = (unsigned short)26742;
unsigned short var_29 = (unsigned short)17078;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)33;
signed char var_32 = (signed char)59;
unsigned char var_33 = (unsigned char)53;
unsigned char var_34 = (unsigned char)106;
long long int var_35 = 3781677805318187805LL;
unsigned char var_36 = (unsigned char)139;
unsigned int var_37 = 3073946036U;
_Bool var_38 = (_Bool)1;
long long int arr_1 [15] ;
int arr_3 [15] ;
unsigned int arr_5 [15] ;
short arr_12 [15] ;
signed char arr_13 [15] [15] [15] ;
long long int arr_14 [15] [15] ;
unsigned int arr_15 [15] [15] [15] ;
_Bool arr_17 [15] [15] [15] [15] ;
signed char arr_19 [15] [15] [15] [15] ;
unsigned int arr_22 [15] ;
signed char arr_25 [15] [15] [15] [15] ;
unsigned int arr_29 [15] [15] [15] [15] [15] [15] ;
signed char arr_30 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -2034652118354305849LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1420955107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1531049532U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)16027;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = -6243185567423511253LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 241357347U : 3817272113U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 1623695715U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 463314521U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)43 : (signed char)63;
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
