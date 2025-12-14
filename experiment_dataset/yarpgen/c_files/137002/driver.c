#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2470223953574020193LL;
unsigned long long int var_1 = 14417959991211919830ULL;
short var_2 = (short)-29825;
unsigned long long int var_3 = 9938066837535756912ULL;
short var_4 = (short)11775;
long long int var_5 = -8677614471858827140LL;
long long int var_6 = -2514912892844797313LL;
unsigned int var_7 = 3573555938U;
int var_8 = 1512794866;
int var_9 = 2093747329;
unsigned short var_10 = (unsigned short)52593;
_Bool var_11 = (_Bool)1;
int var_12 = -1803842487;
unsigned int var_13 = 1042834392U;
unsigned char var_14 = (unsigned char)142;
int var_15 = -103119491;
int var_16 = -2120540120;
int zero = 0;
signed char var_17 = (signed char)-122;
short var_18 = (short)7950;
unsigned long long int var_19 = 2026239994536117438ULL;
unsigned int var_20 = 4268112904U;
unsigned long long int var_21 = 5829676058113832752ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2881132776113795740ULL;
signed char var_24 = (signed char)-10;
long long int var_25 = -656847620318547157LL;
signed char var_26 = (signed char)21;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 2695067150U;
unsigned long long int var_29 = 14365805864515992440ULL;
unsigned long long int var_30 = 13419745134419628016ULL;
short var_31 = (short)12637;
long long int var_32 = 7691692943634270830LL;
int arr_6 [15] ;
long long int arr_7 [15] [15] [15] ;
_Bool arr_8 [15] [15] ;
unsigned char arr_12 [15] [15] ;
unsigned int arr_19 [15] [15] ;
signed char arr_20 [15] [15] [15] ;
unsigned long long int arr_25 [15] ;
unsigned short arr_26 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -2112704515 : -2026457780;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2038559788898540088LL : 370538102344629998LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = 1494332882U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 790018590973342543ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)3303;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
