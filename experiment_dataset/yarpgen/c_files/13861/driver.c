#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)60;
long long int var_2 = 8898753008683320231LL;
unsigned long long int var_3 = 9623750870808773307ULL;
long long int var_4 = 6298697637876773578LL;
long long int var_5 = -8091414678769552173LL;
int var_6 = -938363945;
unsigned short var_8 = (unsigned short)23032;
unsigned short var_10 = (unsigned short)19455;
unsigned short var_11 = (unsigned short)8011;
long long int var_12 = -4316777727755930803LL;
unsigned long long int var_14 = 2034253303337772221ULL;
unsigned long long int var_16 = 10846079831515069672ULL;
short var_17 = (short)-2326;
signed char var_18 = (signed char)42;
int zero = 0;
unsigned int var_19 = 2011681581U;
unsigned char var_20 = (unsigned char)252;
unsigned long long int var_21 = 7744922802881115498ULL;
int var_22 = -54417070;
long long int var_23 = 1324829731627698272LL;
signed char var_24 = (signed char)116;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-69;
long long int var_27 = 7397336140482473725LL;
unsigned short var_28 = (unsigned short)23670;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)93;
unsigned char var_31 = (unsigned char)143;
unsigned long long int var_32 = 648789465389527203ULL;
unsigned short var_33 = (unsigned short)11255;
long long int var_34 = 8368569948889285014LL;
unsigned int var_35 = 1733382420U;
_Bool var_36 = (_Bool)0;
unsigned int arr_2 [18] ;
unsigned long long int arr_3 [18] ;
unsigned short arr_5 [18] [18] [18] ;
unsigned short arr_12 [18] ;
long long int arr_15 [18] ;
_Bool arr_17 [18] ;
unsigned char arr_37 [18] [18] [18] [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
unsigned long long int arr_29 [18] ;
int arr_39 [18] [18] [18] [18] [18] ;
unsigned int arr_40 [18] [18] [18] ;
long long int arr_47 [18] ;
short arr_48 [18] [18] [18] [18] [18] [18] [18] ;
_Bool arr_49 [18] [18] [18] ;
unsigned long long int arr_52 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1028755011U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 8205408053312426918ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)40126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)19201;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = -4001187756239805534LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 15131896694325145303ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = 10390305490485214869ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = -1607679708;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 121221201U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? -7616137418892945021LL : -667878907760474922LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (short)6230 : (short)11806;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_52 [i_0] = 8107123993601664851ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_49 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
