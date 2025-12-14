#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4576564610112869725LL;
unsigned char var_1 = (unsigned char)37;
unsigned int var_6 = 1909113275U;
unsigned int var_7 = 2537196390U;
int var_8 = -1424910822;
unsigned long long int var_11 = 14402189727948839274ULL;
int zero = 0;
unsigned long long int var_12 = 1159950653014458375ULL;
long long int var_13 = -8242102271732519477LL;
unsigned char var_14 = (unsigned char)44;
short var_15 = (short)14720;
long long int var_16 = -5112916018637205305LL;
unsigned short var_17 = (unsigned short)49241;
long long int var_18 = -8697000265976638472LL;
unsigned long long int var_19 = 7103283151887472206ULL;
long long int var_20 = 1543980255657330804LL;
unsigned char var_21 = (unsigned char)51;
unsigned int var_22 = 4068571479U;
unsigned char var_23 = (unsigned char)182;
long long int arr_0 [20] ;
int arr_1 [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_5 [23] ;
unsigned char arr_11 [23] [23] [23] ;
long long int arr_13 [23] [23] [23] ;
unsigned short arr_18 [25] ;
unsigned int arr_19 [25] [25] ;
unsigned long long int arr_4 [20] [20] ;
long long int arr_7 [23] ;
int arr_8 [23] [23] ;
unsigned int arr_14 [23] [23] [23] [23] ;
short arr_17 [23] [23] [23] [23] [23] ;
int arr_20 [25] ;
_Bool arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 6151731357269862507LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1748237094;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -4555869909070445378LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 13242357910788322533ULL : 9015600685379796852ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1901918943007292075LL : 3315924678793676434LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (unsigned short)5399;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = 754084459U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 11304130565815637684ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2237423566566855159LL : 997196156164860632LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 643788877 : 1310858799;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3261263797U : 2767488048U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-6292 : (short)29483;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -233039708;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
