#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)19789;
long long int var_2 = -6022153793590553870LL;
short var_3 = (short)-27892;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3458206202U;
short var_6 = (short)7965;
signed char var_7 = (signed char)49;
unsigned char var_8 = (unsigned char)97;
unsigned int var_9 = 1615774788U;
int var_10 = -267992070;
short var_11 = (short)-17564;
unsigned int var_12 = 1845327069U;
int var_13 = 1331629705;
unsigned char var_14 = (unsigned char)221;
unsigned char var_15 = (unsigned char)139;
int var_16 = -1096559532;
unsigned int var_18 = 2811197840U;
int var_19 = -145899264;
int zero = 0;
short var_20 = (short)12292;
long long int var_21 = -3366261878566134307LL;
short var_22 = (short)-31283;
int var_23 = 386224321;
unsigned int var_24 = 990567417U;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)60;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-7670;
unsigned char var_29 = (unsigned char)47;
long long int arr_0 [15] ;
unsigned char arr_1 [15] ;
long long int arr_2 [15] ;
unsigned int arr_3 [15] [15] ;
_Bool arr_7 [15] [15] [15] ;
unsigned char arr_8 [15] ;
unsigned int arr_13 [19] ;
unsigned char arr_14 [19] ;
int arr_15 [19] ;
short arr_5 [15] ;
_Bool arr_6 [15] ;
unsigned long long int arr_9 [15] [15] ;
unsigned short arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8061440996375044440LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 7644200609600105972LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3559035445U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 297242128U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -1205218684;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)30254;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 18295068527612592817ULL : 15229598488766586433ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)43064;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
