#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2296195196U;
unsigned int var_1 = 4263121056U;
unsigned int var_2 = 1985721450U;
long long int var_3 = 1081056876530272522LL;
signed char var_5 = (signed char)8;
int var_6 = -428377541;
signed char var_7 = (signed char)-42;
unsigned long long int var_8 = 3647058633357141741ULL;
int var_9 = 1120997141;
unsigned long long int var_10 = 4976897605973172886ULL;
unsigned int var_11 = 2951416146U;
short var_12 = (short)-29311;
int var_14 = 1125482495;
int var_15 = -267479435;
unsigned long long int var_16 = 1400642075946004413ULL;
unsigned long long int var_17 = 5521171649136853318ULL;
unsigned int var_18 = 593689501U;
int zero = 0;
unsigned char var_19 = (unsigned char)236;
signed char var_20 = (signed char)49;
short var_21 = (short)14011;
unsigned int var_22 = 3756528509U;
unsigned int var_23 = 1010170022U;
unsigned long long int var_24 = 1232486888100658595ULL;
unsigned int var_25 = 3301800179U;
unsigned int var_26 = 4155146208U;
unsigned long long int arr_0 [14] ;
int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
unsigned int arr_11 [25] ;
unsigned int arr_12 [25] ;
short arr_14 [25] [25] ;
int arr_15 [25] [25] [25] ;
short arr_17 [25] ;
unsigned int arr_5 [14] ;
unsigned int arr_9 [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] ;
unsigned int arr_16 [25] ;
unsigned long long int arr_19 [25] [25] [25] ;
int arr_20 [25] [25] [25] ;
short arr_21 [25] ;
unsigned int arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7350798917202407787ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1570611975;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 7297480041589102550ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1694570424502669951ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 11872203327993996304ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 370476266U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 2020665991U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5133 : (short)19234;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1385315637;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (short)25317;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1060179461U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2849021689U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 497647629U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 820497190U : 3192529820U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17979724042950015478ULL : 2338034072868897099ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1930698416 : 508279461;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)3865 : (short)-2443;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1760893822U : 3206763108U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
