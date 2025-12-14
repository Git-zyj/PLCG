#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13032102999725455413ULL;
long long int var_1 = -1848014604304994463LL;
unsigned int var_2 = 3864888837U;
unsigned long long int var_3 = 17986961842655365974ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5205027967164205362LL;
unsigned long long int var_6 = 17316931938315225296ULL;
unsigned int var_7 = 2118411242U;
short var_8 = (short)-15559;
long long int var_9 = 3762626406298792771LL;
short var_10 = (short)14716;
short var_11 = (short)-20721;
int zero = 0;
unsigned int var_12 = 4037364238U;
short var_13 = (short)7228;
unsigned int var_14 = 466223163U;
short var_15 = (short)-24943;
unsigned int var_16 = 2558304624U;
unsigned long long int var_17 = 5973632723843627836ULL;
long long int var_18 = -7647323809088671490LL;
unsigned long long int var_19 = 2290283066840296343ULL;
unsigned long long int var_20 = 16577037059127524293ULL;
unsigned long long int var_21 = 4650879722070090039ULL;
unsigned int var_22 = 1745403700U;
unsigned int var_23 = 1737999994U;
unsigned long long int var_24 = 14685364098772957632ULL;
unsigned int var_25 = 2615558514U;
short var_26 = (short)-1525;
unsigned long long int var_27 = 12862616242895085811ULL;
short arr_0 [20] ;
short arr_1 [20] ;
unsigned int arr_3 [13] ;
short arr_4 [13] [13] ;
long long int arr_5 [13] ;
unsigned long long int arr_6 [13] ;
long long int arr_7 [13] [13] ;
long long int arr_8 [13] [13] [13] ;
unsigned long long int arr_9 [13] [13] ;
unsigned int arr_10 [13] ;
_Bool arr_13 [12] ;
unsigned long long int arr_23 [12] [12] [12] [12] ;
short arr_25 [12] [12] [12] ;
unsigned long long int arr_29 [15] ;
unsigned long long int arr_30 [15] [15] ;
unsigned int arr_2 [20] ;
unsigned int arr_12 [13] [13] [13] ;
short arr_27 [12] [12] [12] [12] ;
unsigned int arr_28 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)28119 : (short)21310;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-5786;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4095928769U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)17308;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -6386671445126756997LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 13559285752222686667ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 1080778107154702109LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -945548142511338864LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 10193719468167450383ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 1634326415U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 4011461785255323944ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)-27547;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = 10880414200121307282ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = 16175380395750898150ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2027403925U : 2786509511U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 261396166U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-11803 : (short)-7500;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = 3879645471U;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
