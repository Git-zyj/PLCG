#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3069904741633403483ULL;
unsigned int var_1 = 2804728107U;
short var_3 = (short)21594;
int var_4 = -1229941458;
unsigned long long int var_5 = 9549328670253524129ULL;
signed char var_6 = (signed char)-113;
signed char var_9 = (signed char)-116;
unsigned long long int var_10 = 1888841565590778983ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
unsigned long long int var_12 = 768900959224043685ULL;
short var_13 = (short)18360;
signed char var_14 = (signed char)107;
unsigned int var_15 = 1641369662U;
signed char var_16 = (signed char)-90;
unsigned int var_17 = 3111329302U;
short var_18 = (short)-19449;
short var_19 = (short)-19519;
unsigned long long int var_20 = 7358410403310382418ULL;
signed char var_21 = (signed char)117;
int var_22 = -1633123790;
unsigned short var_23 = (unsigned short)31409;
signed char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
short arr_2 [16] [16] ;
unsigned short arr_4 [16] [16] [16] ;
short arr_5 [16] ;
signed char arr_7 [13] ;
signed char arr_9 [13] ;
signed char arr_13 [13] ;
signed char arr_14 [13] ;
signed char arr_17 [16] ;
int arr_3 [16] ;
signed char arr_10 [13] ;
unsigned char arr_16 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 12736234563038971159ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)14839;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)1651 : (unsigned short)49052;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)24696;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 470739341;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)19;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
