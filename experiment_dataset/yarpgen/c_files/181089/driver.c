#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1843357400;
unsigned char var_1 = (unsigned char)29;
signed char var_2 = (signed char)-77;
unsigned short var_3 = (unsigned short)16370;
int var_4 = 1063149308;
long long int var_5 = 656919814608527558LL;
unsigned char var_6 = (unsigned char)55;
signed char var_7 = (signed char)-1;
unsigned char var_8 = (unsigned char)81;
int var_9 = 1271948051;
unsigned short var_10 = (unsigned short)27207;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)66;
int zero = 0;
int var_13 = -920344333;
unsigned short var_14 = (unsigned short)1437;
unsigned char var_15 = (unsigned char)75;
unsigned char var_16 = (unsigned char)214;
unsigned int var_17 = 1272821096U;
short var_18 = (short)-19638;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)47069;
short var_21 = (short)4215;
long long int var_22 = -133624064375613370LL;
int var_23 = 1284882076;
unsigned char var_24 = (unsigned char)90;
unsigned char arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_5 [25] ;
int arr_6 [25] [25] ;
_Bool arr_8 [25] [25] ;
short arr_11 [25] [25] [25] [25] ;
signed char arr_13 [25] [25] [25] [25] [25] ;
unsigned char arr_21 [15] ;
unsigned short arr_23 [15] ;
unsigned char arr_25 [15] [15] [15] ;
unsigned long long int arr_4 [23] ;
short arr_16 [15] ;
unsigned short arr_19 [18] ;
unsigned short arr_26 [15] [15] [15] ;
long long int arr_27 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)44805;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -1406226678;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-12640;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)62526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 4938191752715442711ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)26172 : (short)-24476;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)62369;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)60882;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = -1216439322308835530LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
