#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 516459750;
long long int var_3 = -2866426210445638391LL;
signed char var_5 = (signed char)5;
signed char var_7 = (signed char)9;
long long int var_11 = -2435279153201863166LL;
unsigned long long int var_13 = 1440663870179177660ULL;
int zero = 0;
signed char var_15 = (signed char)-50;
int var_16 = 641677589;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 903573836493174068LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1522725410U;
unsigned short var_23 = (unsigned short)30606;
signed char var_24 = (signed char)-30;
signed char var_25 = (signed char)122;
int var_26 = -1026998157;
int var_27 = -579212035;
signed char var_28 = (signed char)102;
signed char var_29 = (signed char)-2;
unsigned char var_30 = (unsigned char)130;
_Bool arr_0 [19] ;
int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
int arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
_Bool arr_6 [25] ;
unsigned long long int arr_9 [16] ;
unsigned long long int arr_13 [18] ;
unsigned long long int arr_14 [18] ;
int arr_15 [18] [18] [18] ;
int arr_16 [18] ;
unsigned int arr_17 [18] [18] [18] ;
_Bool arr_20 [18] ;
unsigned long long int arr_21 [18] ;
signed char arr_23 [18] [18] ;
unsigned char arr_24 [18] [18] [18] [18] ;
_Bool arr_3 [19] ;
long long int arr_7 [25] ;
signed char arr_8 [25] ;
int arr_12 [16] [16] ;
signed char arr_18 [18] ;
unsigned long long int arr_19 [18] ;
signed char arr_22 [18] ;
unsigned long long int arr_28 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1869177299;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 5747008000828507283ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 1739241749;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1449258316U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 17945314064721678516ULL : 871969612116765047ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 8896139673403694082ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 11440286134951564252ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1520529097;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 1707056584;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 2937812996U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 5849423333449446141ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -2124840091261544743LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 1457708113 : -1160184280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 7305311447806116240ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = 18374527434669302532ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
