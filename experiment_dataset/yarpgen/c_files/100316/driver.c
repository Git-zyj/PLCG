#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3431425013U;
unsigned char var_2 = (unsigned char)197;
unsigned char var_3 = (unsigned char)12;
unsigned int var_4 = 3688299475U;
signed char var_5 = (signed char)15;
long long int var_6 = 9127925905869493275LL;
long long int var_7 = 1569587267668047024LL;
unsigned int var_8 = 687339450U;
unsigned char var_9 = (unsigned char)164;
unsigned char var_10 = (unsigned char)13;
signed char var_11 = (signed char)88;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3226928970136958872LL;
unsigned int var_14 = 2771188043U;
long long int var_15 = 5976543685537432993LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)58;
int zero = 0;
unsigned int var_18 = 3064529861U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)119;
signed char var_21 = (signed char)-48;
unsigned long long int var_22 = 2528235873869036458ULL;
int var_23 = -1665287336;
unsigned long long int var_24 = 18307962409465264467ULL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 4024131452U;
unsigned short var_27 = (unsigned short)62808;
signed char var_28 = (signed char)-16;
unsigned int var_29 = 2502511527U;
unsigned int var_30 = 2361823523U;
_Bool var_31 = (_Bool)1;
long long int var_32 = 4678491958352689836LL;
unsigned long long int var_33 = 18316557875147140794ULL;
int var_34 = 2133514791;
unsigned long long int var_35 = 7086570179609537556ULL;
unsigned char var_36 = (unsigned char)214;
_Bool var_37 = (_Bool)0;
unsigned char arr_0 [12] ;
_Bool arr_2 [12] [12] ;
signed char arr_3 [12] [12] ;
unsigned int arr_4 [12] [12] ;
unsigned char arr_5 [15] ;
unsigned int arr_6 [15] ;
_Bool arr_9 [15] [15] [15] ;
signed char arr_10 [15] [15] ;
unsigned short arr_12 [15] ;
_Bool arr_14 [15] [15] [15] ;
_Bool arr_15 [15] [15] [15] [15] ;
unsigned short arr_17 [15] [15] [15] [15] ;
_Bool arr_18 [15] [15] [15] ;
unsigned int arr_22 [15] [15] [15] [15] ;
unsigned int arr_26 [11] ;
int arr_29 [22] ;
unsigned short arr_30 [22] [22] ;
_Bool arr_31 [22] ;
short arr_34 [22] ;
unsigned short arr_7 [15] [15] ;
_Bool arr_11 [15] [15] ;
unsigned long long int arr_16 [15] [15] [15] [15] ;
long long int arr_19 [15] [15] [15] [15] ;
unsigned short arr_20 [15] [15] [15] [15] ;
unsigned int arr_24 [15] [15] ;
long long int arr_25 [15] ;
int arr_28 [11] ;
unsigned short arr_32 [22] ;
_Bool arr_35 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4096405907U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 4090238182U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned short)63939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)53696 : (unsigned short)22229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 186521868U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = 1625490800U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = 376475650;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)13879;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (short)15083;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)32741;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 15707425649326157364ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6925348092581666331LL : 7742232582665799656LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)45792 : (unsigned short)14070;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = 3613064071U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 1981973006795165331LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 1644220940 : -680507931;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (unsigned short)10982;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
