#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23898;
unsigned int var_5 = 2941663121U;
long long int var_7 = 4343461114871400093LL;
unsigned short var_10 = (unsigned short)2547;
unsigned short var_12 = (unsigned short)62825;
unsigned short var_13 = (unsigned short)18442;
signed char var_16 = (signed char)24;
unsigned short var_18 = (unsigned short)28625;
int zero = 0;
unsigned int var_19 = 583486877U;
long long int var_20 = -8395795685640515065LL;
signed char var_21 = (signed char)29;
unsigned short var_22 = (unsigned short)42255;
signed char var_23 = (signed char)98;
unsigned int var_24 = 2656187046U;
int var_25 = -1292437176;
signed char var_26 = (signed char)123;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 286353499U;
unsigned int var_30 = 1803938593U;
unsigned int var_31 = 663091170U;
short arr_1 [15] [15] ;
_Bool arr_2 [15] [15] ;
unsigned short arr_7 [15] [15] [15] [15] [15] [15] ;
long long int arr_13 [25] ;
long long int arr_14 [25] ;
short arr_15 [25] [25] [25] ;
short arr_16 [25] ;
unsigned int arr_20 [25] [25] [25] ;
unsigned int arr_21 [25] [25] [25] ;
unsigned long long int arr_29 [25] ;
_Bool arr_30 [25] [25] [25] [25] [25] ;
signed char arr_17 [25] ;
long long int arr_25 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-7502;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)32220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 9202124311712142099LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -4469467917441394480LL : -4073258863750274459LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)10658;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (short)24470;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 366923626U : 4060366679U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 147786479U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 3996113583888042676ULL : 7439153970711393291ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)-27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 7323428939828328204LL : -7211976215869009167LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
