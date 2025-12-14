#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3250398307U;
unsigned long long int var_1 = 11878151328094706518ULL;
unsigned short var_3 = (unsigned short)23604;
unsigned long long int var_4 = 8551242334268843222ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10000543725131490782ULL;
long long int var_7 = 6904536705661588932LL;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-27917;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)63789;
short var_13 = (short)-9060;
long long int var_14 = 495337487384850248LL;
unsigned char var_15 = (unsigned char)100;
signed char var_16 = (signed char)-53;
int var_17 = 1084618251;
unsigned int var_18 = 2299877777U;
unsigned int var_19 = 729313779U;
int arr_0 [21] ;
long long int arr_2 [21] ;
unsigned long long int arr_3 [17] ;
signed char arr_8 [20] [20] ;
signed char arr_9 [20] [20] [20] ;
signed char arr_10 [20] ;
long long int arr_11 [20] [20] ;
long long int arr_14 [20] ;
signed char arr_15 [20] ;
_Bool arr_5 [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
int arr_16 [20] ;
unsigned int arr_17 [20] [20] [20] ;
short arr_18 [20] ;
_Bool arr_19 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 841175893;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2945127762056627320LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4046984462473963571ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1501852677427156490LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -2596529292739582451LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 9373916361275342360ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -431647378;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 3112155851U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (short)32141;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
