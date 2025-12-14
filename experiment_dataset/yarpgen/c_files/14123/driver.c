#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1218756477;
unsigned long long int var_2 = 11889619140932769716ULL;
int var_3 = 1070305845;
signed char var_4 = (signed char)95;
unsigned char var_6 = (unsigned char)180;
short var_8 = (short)-18333;
signed char var_9 = (signed char)-125;
int var_10 = 441829315;
long long int var_12 = 22383831060010861LL;
short var_13 = (short)5359;
unsigned short var_14 = (unsigned short)5064;
short var_15 = (short)-25626;
signed char var_19 = (signed char)-75;
int zero = 0;
short var_20 = (short)-17326;
int var_21 = 481053545;
unsigned short var_22 = (unsigned short)19008;
unsigned int var_23 = 3787108164U;
int var_24 = 1506580773;
short var_25 = (short)19701;
short var_26 = (short)-14047;
_Bool var_27 = (_Bool)1;
long long int arr_7 [18] ;
int arr_11 [18] ;
long long int arr_12 [18] [18] [18] ;
short arr_13 [18] [18] [18] ;
short arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 42431990946504868LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -2004694981;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 7044842933399841231LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-24564;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)18963;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
