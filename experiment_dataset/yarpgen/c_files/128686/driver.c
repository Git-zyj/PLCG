#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25486;
unsigned long long int var_1 = 11682698652592901925ULL;
unsigned short var_2 = (unsigned short)64742;
short var_3 = (short)-31529;
unsigned char var_4 = (unsigned char)117;
short var_5 = (short)-17218;
unsigned char var_6 = (unsigned char)89;
unsigned short var_7 = (unsigned short)2068;
unsigned long long int var_8 = 2586271621489141290ULL;
short var_10 = (short)675;
short var_11 = (short)-13367;
_Bool var_12 = (_Bool)0;
short var_14 = (short)13378;
int var_16 = -2051466681;
int zero = 0;
unsigned short var_18 = (unsigned short)47329;
unsigned short var_19 = (unsigned short)11057;
unsigned short var_20 = (unsigned short)54240;
long long int var_21 = 7726929115572214180LL;
unsigned int var_22 = 1140572707U;
short var_23 = (short)-9862;
unsigned long long int var_24 = 14186867562412489093ULL;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
int var_28 = -713575094;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)93;
unsigned short var_31 = (unsigned short)41035;
unsigned short var_32 = (unsigned short)5467;
signed char var_33 = (signed char)-1;
_Bool arr_0 [15] ;
_Bool arr_1 [15] ;
signed char arr_2 [15] ;
_Bool arr_3 [15] ;
unsigned short arr_4 [15] [15] [15] ;
short arr_6 [15] [15] [15] ;
signed char arr_7 [15] [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] ;
short arr_15 [15] ;
long long int arr_19 [18] [18] ;
unsigned long long int arr_20 [18] ;
_Bool arr_5 [15] ;
_Bool arr_11 [15] [15] [15] [15] ;
int arr_18 [15] ;
signed char arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)56711;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-8063;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)1187 : (unsigned short)64129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 16560259929595809445ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (short)-27718;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = -6381405062508146528LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 2242086533964362814ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 102471958;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (signed char)92;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
