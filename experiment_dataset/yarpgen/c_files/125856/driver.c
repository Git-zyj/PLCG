#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18396329412088818743ULL;
short var_2 = (short)-27942;
unsigned short var_3 = (unsigned short)58065;
unsigned int var_4 = 2016978842U;
int var_5 = -464511414;
unsigned char var_6 = (unsigned char)96;
unsigned int var_7 = 1466611253U;
unsigned long long int var_8 = 2888172410595889446ULL;
unsigned int var_11 = 896661543U;
short var_12 = (short)-9256;
int zero = 0;
long long int var_13 = 2918030621137381127LL;
unsigned short var_14 = (unsigned short)64793;
unsigned short var_15 = (unsigned short)4781;
unsigned long long int var_16 = 6459024182445526156ULL;
unsigned long long int var_17 = 3469860463582426642ULL;
short var_18 = (short)-21849;
unsigned long long int var_19 = 4955501207645737719ULL;
short var_20 = (short)5982;
int var_21 = 1902168390;
unsigned char var_22 = (unsigned char)134;
unsigned long long int var_23 = 10009688243323527122ULL;
unsigned char var_24 = (unsigned char)15;
unsigned long long int var_25 = 14934503380888092004ULL;
unsigned char var_26 = (unsigned char)9;
unsigned long long int var_27 = 442884112533090322ULL;
short var_28 = (short)-1089;
signed char var_29 = (signed char)-54;
unsigned int var_30 = 3827782967U;
unsigned short var_31 = (unsigned short)59563;
unsigned long long int var_32 = 5604325421005338542ULL;
unsigned long long int var_33 = 4161379577669074764ULL;
short var_34 = (short)30360;
unsigned short var_35 = (unsigned short)28230;
short var_36 = (short)-5137;
unsigned short arr_0 [21] ;
short arr_3 [23] ;
unsigned char arr_4 [23] ;
short arr_5 [23] [23] ;
signed char arr_6 [23] [23] [23] ;
short arr_7 [23] ;
unsigned long long int arr_8 [23] [23] [23] ;
int arr_10 [23] [23] [23] [23] ;
short arr_11 [23] [23] [23] [23] ;
_Bool arr_17 [15] ;
long long int arr_20 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)34471;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)21916;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)22595;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)67 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)9664 : (short)25418;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 15429463455147511945ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1847099016;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)26644;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 8435626599145705670LL;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
