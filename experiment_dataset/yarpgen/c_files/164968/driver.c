#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -418941176;
signed char var_1 = (signed char)-112;
unsigned int var_3 = 1535267032U;
short var_4 = (short)-24514;
short var_5 = (short)30752;
int var_6 = -2106417868;
unsigned short var_9 = (unsigned short)53551;
long long int var_11 = -3160477982260585679LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)14427;
int var_14 = -1148128690;
unsigned int var_15 = 817945075U;
unsigned int var_16 = 888000225U;
unsigned long long int var_17 = 15706543224343185494ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)20149;
int var_20 = -304513062;
long long int arr_0 [12] ;
short arr_1 [12] ;
int arr_3 [12] ;
unsigned short arr_4 [12] [12] [12] ;
long long int arr_6 [12] ;
int arr_8 [12] ;
unsigned int arr_9 [12] [12] [12] ;
signed char arr_12 [12] [12] ;
short arr_13 [12] [12] ;
unsigned long long int arr_19 [25] [25] ;
unsigned int arr_20 [25] ;
unsigned short arr_2 [12] [12] ;
_Bool arr_7 [12] ;
int arr_10 [12] [12] ;
short arr_11 [12] [12] ;
long long int arr_14 [12] ;
int arr_15 [12] ;
unsigned short arr_18 [12] ;
unsigned long long int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5210279564396385678LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)29501;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -1370766158;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)2369 : (unsigned short)37693;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 752625658318335389LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1407386665;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1438676208U : 2961027693U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-10902;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 14388371827859885109ULL : 7221942399043922388ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 3531926726U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)24814;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = -378829150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (short)20071;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 8314048139214594978LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -2018703032;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned short)61059;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 8457565138743038549ULL : 15586426185723543978ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
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
