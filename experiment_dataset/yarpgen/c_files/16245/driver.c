#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9735736110282122442ULL;
short var_1 = (short)1574;
unsigned int var_3 = 3815313268U;
int var_4 = 969967537;
short var_5 = (short)-6436;
unsigned long long int var_6 = 5364280335957570047ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 5585735247320138009LL;
signed char var_10 = (signed char)108;
short var_11 = (short)-5141;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-9;
unsigned int var_15 = 225129290U;
unsigned short var_16 = (unsigned short)52771;
int zero = 0;
unsigned long long int var_17 = 14099570163412694893ULL;
long long int var_18 = -8266972813534689335LL;
int var_19 = 1711577356;
long long int var_20 = -1960138613595630617LL;
_Bool var_21 = (_Bool)1;
int var_22 = 1875844207;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-5914;
short var_25 = (short)-6232;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2512635426U;
short var_28 = (short)24831;
int var_29 = -994939714;
unsigned int arr_0 [11] [11] ;
long long int arr_1 [11] ;
_Bool arr_2 [11] [11] [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_4 [11] ;
unsigned long long int arr_6 [11] [11] [11] [11] ;
_Bool arr_10 [11] [11] ;
unsigned int arr_12 [11] ;
_Bool arr_14 [21] ;
unsigned int arr_15 [21] ;
long long int arr_17 [21] ;
short arr_20 [21] ;
unsigned long long int arr_23 [21] ;
unsigned int arr_27 [21] ;
_Bool arr_29 [21] [21] ;
unsigned int arr_38 [21] ;
int arr_5 [11] [11] [11] ;
long long int arr_8 [11] [11] [11] ;
int arr_9 [11] [11] ;
_Bool arr_13 [11] [11] [11] ;
unsigned short arr_18 [21] [21] ;
unsigned int arr_19 [21] ;
unsigned char arr_22 [21] [21] ;
unsigned int arr_26 [21] [21] ;
short arr_39 [21] [21] [21] [21] [21] ;
short arr_40 [21] [21] ;
unsigned long long int arr_43 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1110764600U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -8577071058279966807LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 14900334106062129008ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 6767673058252398546LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 5469332274519882204ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 234036535U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 3168886758U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = -2608875023572682890LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (short)-13181;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = 14294217580258233843ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 1753860275U : 2019946843U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = 121386678U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1556648243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -5176673142481134528LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 1494935548;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)35948;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 3035484307U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 1326919895U : 623727901U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)27425 : (short)18671;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)30897 : (short)32351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_43 [i_0] [i_1] = 9211600017829417984ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
