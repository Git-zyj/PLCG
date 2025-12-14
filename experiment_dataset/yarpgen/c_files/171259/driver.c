#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2278735942U;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)73;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)17;
signed char var_16 = (signed char)-93;
signed char var_17 = (signed char)-57;
int zero = 0;
long long int var_18 = -571411171339945438LL;
int var_19 = 964079542;
unsigned long long int var_20 = 11454964652084144299ULL;
unsigned char var_21 = (unsigned char)175;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)40;
unsigned long long int var_24 = 8522147346470374656ULL;
unsigned char var_25 = (unsigned char)18;
unsigned int var_26 = 314923671U;
unsigned int var_27 = 2383096031U;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [25] [25] ;
short arr_1 [25] ;
int arr_11 [22] [22] ;
short arr_14 [22] ;
unsigned char arr_16 [22] ;
long long int arr_2 [25] [25] ;
short arr_6 [12] ;
long long int arr_9 [12] [12] ;
unsigned int arr_10 [12] ;
int arr_15 [22] ;
unsigned int arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 2885219622878741713ULL : 11705724971450277419ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)13033 : (short)25740;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 1553929542;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (short)5560;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -6494451103086001300LL : 5818150976037738749LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-24265 : (short)21920;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -5601046516549957583LL : -798972081160645903LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1179773153U : 3389346838U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 1271613056;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1181418626U : 1882177820U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
