#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17809578389770521491ULL;
unsigned short var_1 = (unsigned short)13784;
unsigned char var_5 = (unsigned char)92;
short var_6 = (short)17379;
long long int var_7 = 6310305953582130322LL;
signed char var_9 = (signed char)-3;
long long int var_10 = -1127195191223645739LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -9014561502614732404LL;
short var_13 = (short)-5641;
signed char var_14 = (signed char)-114;
short var_15 = (short)8004;
long long int var_16 = 1231763828955504528LL;
long long int var_17 = 6829941087742281519LL;
int zero = 0;
long long int var_18 = 3645164199849421500LL;
unsigned int var_19 = 157937083U;
short var_20 = (short)-12153;
short var_21 = (short)20252;
int var_22 = -1656944362;
short var_23 = (short)18534;
unsigned char var_24 = (unsigned char)205;
signed char var_25 = (signed char)-13;
unsigned int var_26 = 3556243311U;
unsigned int var_27 = 111325310U;
short var_28 = (short)12721;
signed char var_29 = (signed char)114;
int var_30 = -2116670437;
unsigned int arr_3 [15] ;
long long int arr_4 [15] ;
signed char arr_9 [15] [15] [15] [15] ;
long long int arr_10 [15] [15] [15] ;
long long int arr_19 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_20 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_22 [15] ;
long long int arr_24 [15] [15] ;
_Bool arr_25 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 664429426U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -4951123985839684271LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3195199992498126453LL : 8357902647450351473LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -4127168496815205297LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)53849;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -3125749865144390463LL : 4347632538763724018LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
