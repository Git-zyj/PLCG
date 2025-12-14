#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6692622995073330031ULL;
unsigned long long int var_7 = 3817814946440265912ULL;
unsigned char var_8 = (unsigned char)28;
long long int var_9 = 4081217010733300883LL;
long long int var_11 = -4454940436427507426LL;
unsigned long long int var_15 = 2158044237444472495ULL;
unsigned int var_18 = 1440529916U;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
long long int var_20 = 7575390853927288506LL;
unsigned char var_21 = (unsigned char)214;
long long int var_22 = 1256913041244462372LL;
unsigned char var_23 = (unsigned char)157;
long long int var_24 = 5586353146379324977LL;
unsigned int var_25 = 2884304870U;
unsigned long long int var_26 = 10587933815567154853ULL;
long long int var_27 = -7975863218447303695LL;
unsigned int var_28 = 2121063015U;
unsigned char var_29 = (unsigned char)243;
unsigned char arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
long long int arr_2 [23] ;
unsigned char arr_6 [19] ;
unsigned int arr_8 [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
long long int arr_11 [19] [19] [19] ;
unsigned long long int arr_14 [19] [19] ;
long long int arr_3 [23] [23] ;
unsigned long long int arr_17 [19] ;
unsigned int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 7371077514111507615LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -846230224516897072LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 15228811U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3291594398692149447ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 8871815069094259112LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 16064489131230070891ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -4491076361895959548LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 11034425424474746555ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 818194146U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
