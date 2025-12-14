#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23609;
unsigned short var_4 = (unsigned short)15338;
long long int var_5 = 7254514074353873821LL;
unsigned char var_6 = (unsigned char)93;
unsigned char var_8 = (unsigned char)135;
unsigned short var_9 = (unsigned short)30668;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)86;
int zero = 0;
long long int var_13 = -3333119614451320763LL;
long long int var_14 = -6612481118736572123LL;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = -8873945538832898660LL;
long long int var_17 = 5622722362678892304LL;
unsigned long long int var_18 = 7578076437374417623ULL;
unsigned int var_19 = 1751803896U;
unsigned short var_20 = (unsigned short)63006;
unsigned short var_21 = (unsigned short)61834;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)23161;
unsigned long long int var_24 = 13414574952557380738ULL;
unsigned long long int var_25 = 3060661849021181883ULL;
short arr_0 [20] ;
unsigned char arr_3 [20] [20] ;
_Bool arr_4 [20] [20] ;
signed char arr_5 [20] [20] [20] ;
long long int arr_7 [20] [20] [20] ;
unsigned char arr_9 [20] ;
unsigned long long int arr_11 [20] [20] ;
int arr_14 [10] ;
signed char arr_16 [10] [10] [10] ;
unsigned char arr_12 [20] ;
long long int arr_20 [10] [10] [10] ;
short arr_21 [10] ;
unsigned int arr_24 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-23567;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3288515524400507969LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 5230434796411793538ULL : 17670973190074729271ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -1021085843;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1502633124081243393LL : -1210844188806480269LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (short)-21379;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1982129058U : 2598272367U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
