#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2781886396054507240ULL;
unsigned long long int var_3 = 3095074410266128911ULL;
unsigned int var_4 = 977809184U;
unsigned long long int var_6 = 13219702270949480683ULL;
unsigned char var_7 = (unsigned char)125;
unsigned long long int var_9 = 6615839767552146050ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)5;
unsigned long long int var_12 = 4666240775369659140ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)89;
unsigned long long int var_14 = 3629131778021579959ULL;
unsigned int var_15 = 1190487026U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 140354693U;
unsigned long long int var_18 = 2319656536650063298ULL;
unsigned char var_19 = (unsigned char)84;
unsigned long long int var_20 = 11206104004404665369ULL;
unsigned long long int var_21 = 15859073494647594369ULL;
unsigned long long int var_22 = 3555400457030496420ULL;
unsigned int var_23 = 3638375839U;
unsigned long long int var_24 = 9778281712040532701ULL;
unsigned char arr_7 [19] ;
unsigned char arr_8 [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
unsigned long long int arr_10 [19] ;
unsigned char arr_16 [19] [19] [19] ;
unsigned long long int arr_22 [19] ;
unsigned long long int arr_23 [19] ;
unsigned char arr_24 [19] ;
unsigned long long int arr_4 [13] ;
unsigned long long int arr_12 [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] ;
unsigned char arr_19 [19] [19] [19] ;
unsigned char arr_20 [19] [19] ;
unsigned char arr_21 [19] ;
unsigned short arr_26 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1659287212150093369ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1711371809749834717ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 11036456149562188393ULL : 17050561772037484202ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 420619887855000586ULL : 16548308135275282005ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2824568042306446132ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 10518518308101974644ULL : 14949918362151958180ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16232881055251195145ULL : 5148762559493307919ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)162 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62502 : (unsigned short)19734;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
