#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8539262464125789963ULL;
unsigned short var_1 = (unsigned short)65011;
short var_2 = (short)27594;
int var_3 = -1716451305;
short var_4 = (short)6308;
short var_5 = (short)304;
long long int var_6 = 5571699770135826273LL;
signed char var_7 = (signed char)69;
long long int var_8 = 7167688005327147217LL;
unsigned long long int var_9 = 7166564819952146932ULL;
short var_11 = (short)-26960;
unsigned int var_12 = 2116387891U;
short var_16 = (short)-23630;
int zero = 0;
unsigned long long int var_17 = 9656430531668765721ULL;
unsigned long long int var_18 = 15428597270285157469ULL;
int var_19 = -1790971543;
unsigned int var_20 = 3052170789U;
short var_21 = (short)21952;
unsigned int var_22 = 2299362354U;
short var_23 = (short)17390;
short arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
int arr_5 [17] ;
unsigned long long int arr_6 [17] ;
_Bool arr_8 [17] [17] [17] ;
short arr_13 [17] [17] [17] ;
short arr_3 [15] [15] ;
unsigned short arr_7 [17] ;
short arr_14 [17] [17] [17] [17] ;
unsigned long long int arr_19 [12] ;
unsigned int arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-19600;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 815937831;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 5769424583959316368ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)12305;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)13230;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)33661;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-9574;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 12929486443986517785ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 404365259U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
