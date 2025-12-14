#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -8008370789052522756LL;
unsigned short var_3 = (unsigned short)7919;
unsigned short var_4 = (unsigned short)47894;
unsigned short var_5 = (unsigned short)21094;
unsigned short var_6 = (unsigned short)33507;
unsigned short var_7 = (unsigned short)58833;
unsigned short var_10 = (unsigned short)45686;
int var_11 = -564095854;
unsigned short var_13 = (unsigned short)22436;
long long int var_15 = -6910513730216896236LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2721;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)22228;
long long int var_21 = -6041531059531187133LL;
unsigned short var_22 = (unsigned short)28553;
unsigned short var_23 = (unsigned short)60629;
_Bool var_24 = (_Bool)0;
long long int arr_19 [12] ;
unsigned short arr_10 [11] [11] [11] [11] [11] [11] ;
int arr_22 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = -2915539923110863382LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)30561 : (unsigned short)6080;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = 1003108515;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
