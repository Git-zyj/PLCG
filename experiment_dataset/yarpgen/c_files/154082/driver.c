#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3945696163515952076LL;
int var_2 = -1594099736;
short var_3 = (short)3269;
unsigned short var_4 = (unsigned short)31602;
_Bool var_5 = (_Bool)0;
long long int var_6 = 7646435930033026066LL;
int var_7 = 1519248404;
unsigned short var_9 = (unsigned short)27232;
unsigned short var_10 = (unsigned short)35276;
unsigned char var_11 = (unsigned char)210;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)81;
int zero = 0;
unsigned long long int var_17 = 13775569970494959833ULL;
signed char var_18 = (signed char)2;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17877776959270635818ULL;
unsigned char var_21 = (unsigned char)193;
unsigned long long int var_22 = 3655364316055755979ULL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 110110770U;
unsigned long long int arr_0 [19] ;
unsigned int arr_1 [19] ;
_Bool arr_2 [19] ;
unsigned char arr_3 [19] ;
unsigned int arr_4 [19] ;
short arr_5 [19] ;
signed char arr_8 [19] [19] [19] ;
signed char arr_9 [19] [19] [19] ;
unsigned char arr_7 [19] ;
_Bool arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 14755981273859312860ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1759557718U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2422997224U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-16461;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)122 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
