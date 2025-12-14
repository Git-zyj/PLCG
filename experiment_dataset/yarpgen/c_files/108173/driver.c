#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 664302485U;
short var_3 = (short)-1353;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-19767;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1990528420U;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)67;
unsigned char var_12 = (unsigned char)215;
signed char var_14 = (signed char)-47;
short var_15 = (short)15493;
short var_16 = (short)17692;
unsigned long long int var_17 = 15219054937216712799ULL;
signed char var_18 = (signed char)5;
unsigned long long int var_19 = 3404669889913607571ULL;
int zero = 0;
short var_20 = (short)-2566;
signed char var_21 = (signed char)13;
unsigned short var_22 = (unsigned short)41549;
unsigned char var_23 = (unsigned char)1;
unsigned long long int var_24 = 2114251918028855813ULL;
signed char var_25 = (signed char)60;
unsigned short var_26 = (unsigned short)45365;
unsigned long long int var_27 = 6838526439204976244ULL;
unsigned int var_28 = 2414928570U;
unsigned int var_29 = 3033793294U;
unsigned long long int var_30 = 11747439804456076025ULL;
signed char var_31 = (signed char)-87;
unsigned long long int var_32 = 809806843485751349ULL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)36;
signed char arr_0 [12] [12] ;
short arr_1 [12] ;
unsigned int arr_2 [12] ;
signed char arr_3 [12] [12] ;
unsigned short arr_4 [12] [12] [12] ;
unsigned char arr_7 [15] ;
unsigned long long int arr_8 [15] ;
unsigned short arr_9 [15] ;
_Bool arr_11 [15] [15] ;
_Bool arr_12 [15] [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] ;
short arr_15 [15] [15] [15] [15] [15] ;
unsigned int arr_16 [15] [15] ;
unsigned long long int arr_17 [15] [15] [15] [15] [15] ;
unsigned long long int arr_18 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_19 [15] [15] [15] [15] [15] [15] [15] ;
signed char arr_22 [15] [15] ;
_Bool arr_23 [15] [15] ;
unsigned int arr_27 [10] [10] ;
unsigned int arr_6 [12] ;
signed char arr_20 [15] [15] [15] [15] ;
unsigned int arr_21 [15] [15] ;
signed char arr_25 [15] ;
unsigned long long int arr_26 [15] ;
unsigned long long int arr_30 [10] ;
unsigned short arr_31 [10] ;
signed char arr_32 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)19207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 265095613U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-83 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)65272 : (unsigned short)2899;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 14226043528693658531ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31051 : (unsigned short)26988;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 17180898612786175354ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 1515560842U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)22876 : (short)32294;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = 3626787471U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 13421718038535237364ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12978890875037578575ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 15840724833147038935ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-60 : (signed char)-27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = 2294317708U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2233094865U : 2443888950U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-31 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 3354913297U : 1971509938U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 2584227180554688924ULL : 5006791412913104990ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = 14866747682920016084ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (unsigned short)33397;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (signed char)88;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
