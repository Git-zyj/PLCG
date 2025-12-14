#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11880823411732082849ULL;
unsigned int var_1 = 623673784U;
signed char var_2 = (signed char)-88;
unsigned long long int var_3 = 8453300277279486660ULL;
unsigned short var_5 = (unsigned short)39230;
signed char var_6 = (signed char)-26;
unsigned long long int var_8 = 3224925554514134888ULL;
unsigned int var_9 = 2356316457U;
unsigned long long int var_10 = 18297463016759742393ULL;
int var_11 = -1516670243;
unsigned long long int var_12 = 3582443169629937381ULL;
int zero = 0;
unsigned long long int var_13 = 4400006004811764204ULL;
unsigned char var_14 = (unsigned char)243;
unsigned long long int var_15 = 17050919074222042045ULL;
unsigned char var_16 = (unsigned char)150;
long long int var_17 = -142838485076185434LL;
signed char var_18 = (signed char)-3;
unsigned long long int arr_0 [24] ;
short arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
unsigned short arr_4 [24] [24] [24] ;
unsigned short arr_6 [24] ;
signed char arr_8 [24] [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] ;
int arr_11 [24] [24] [24] ;
unsigned short arr_5 [24] [24] ;
unsigned short arr_12 [24] [24] [24] [24] ;
unsigned long long int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1052541059969474973ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)22084;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 277793628004471635ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2417280654842054508ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)40146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)14364;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 10646385059296966412ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 314194046;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)21553;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46842;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 17021201502979348946ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
