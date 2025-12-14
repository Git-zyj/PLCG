#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1540528658U;
unsigned char var_4 = (unsigned char)36;
short var_6 = (short)-12965;
unsigned char var_10 = (unsigned char)182;
int var_11 = 1321866461;
int zero = 0;
int var_14 = 1781715839;
int var_15 = -639897828;
signed char var_16 = (signed char)67;
unsigned long long int var_17 = 10911923626610908119ULL;
unsigned char var_18 = (unsigned char)197;
unsigned char var_19 = (unsigned char)33;
int var_20 = -1237195325;
signed char var_21 = (signed char)-121;
unsigned long long int var_22 = 13261203472544726810ULL;
signed char var_23 = (signed char)-89;
unsigned long long int arr_0 [12] ;
signed char arr_1 [12] ;
signed char arr_3 [23] ;
unsigned char arr_4 [23] ;
int arr_6 [13] ;
short arr_8 [13] [13] ;
short arr_5 [23] ;
unsigned char arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3300513931707256539ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1035086889;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)13039;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-21555 : (short)-30356;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)104;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
