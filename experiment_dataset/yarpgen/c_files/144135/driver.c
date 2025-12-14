#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2043281796U;
int var_2 = -1505258702;
unsigned char var_3 = (unsigned char)229;
unsigned char var_5 = (unsigned char)224;
unsigned long long int var_6 = 6468696905328614939ULL;
unsigned long long int var_7 = 17955554786800416822ULL;
signed char var_10 = (signed char)112;
unsigned long long int var_11 = 7259577460863977678ULL;
unsigned long long int var_12 = 14522218530090908001ULL;
unsigned int var_13 = 959128758U;
int var_14 = 1160192611;
long long int var_15 = -6837992034784825831LL;
unsigned int var_16 = 1262750745U;
int zero = 0;
int var_17 = -840722287;
signed char var_18 = (signed char)-26;
unsigned short var_19 = (unsigned short)15509;
int var_20 = -1738666539;
unsigned int var_21 = 921812727U;
unsigned long long int arr_1 [17] ;
int arr_2 [17] ;
long long int arr_11 [23] ;
_Bool arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
_Bool arr_9 [16] [16] ;
_Bool arr_12 [23] [23] ;
unsigned int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5559313980080598987ULL : 11384966165852350764ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 350692090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 694785531603383903LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 16762277043221684170ULL : 1947928251927962645ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 1109690366U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
