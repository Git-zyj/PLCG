#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32362;
int var_2 = 901244766;
long long int var_3 = -7283615375436629814LL;
unsigned int var_5 = 362916589U;
unsigned int var_7 = 2046427485U;
long long int var_8 = -4353660240219093003LL;
signed char var_10 = (signed char)-40;
unsigned char var_11 = (unsigned char)137;
int var_12 = -71240991;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
long long int var_16 = 5371921259575768398LL;
unsigned long long int var_17 = 851570995069816232ULL;
short var_18 = (short)-5305;
_Bool var_19 = (_Bool)1;
short var_20 = (short)18952;
short var_21 = (short)-25995;
long long int var_22 = 7343991995958128517LL;
short var_23 = (short)5335;
signed char var_24 = (signed char)-97;
int var_25 = -864922233;
unsigned char var_26 = (unsigned char)70;
unsigned char var_27 = (unsigned char)49;
unsigned short var_28 = (unsigned short)41718;
unsigned char var_29 = (unsigned char)253;
unsigned long long int var_30 = 13618620917930050309ULL;
unsigned char var_31 = (unsigned char)218;
unsigned short var_32 = (unsigned short)23253;
short var_33 = (short)-28200;
short arr_0 [21] [21] ;
long long int arr_2 [21] ;
long long int arr_4 [21] ;
short arr_10 [21] [21] [21] [21] ;
unsigned char arr_11 [21] [21] [21] [21] [21] ;
short arr_13 [21] ;
_Bool arr_16 [21] ;
unsigned long long int arr_22 [21] ;
unsigned long long int arr_24 [21] [21] [21] [21] ;
long long int arr_26 [21] [21] [21] [21] [21] [21] ;
long long int arr_27 [21] [21] [21] [21] [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_6 [21] ;
long long int arr_12 [21] ;
long long int arr_33 [21] [21] [21] ;
short arr_39 [21] [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-17940;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -790983757463823406LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -7045189764698577651LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)12822;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)26419;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = 16709381876936224723ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 15664304929338254058ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1498206027753771329LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 2055996910720861800LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)62724;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 2661306663U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -5731265091378295921LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5746595207232217309LL : -1222253612724057400LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (short)-27014 : (short)-517;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
