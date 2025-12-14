#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15999;
long long int var_2 = 5595473153320796636LL;
unsigned long long int var_3 = 3725098122052210172ULL;
unsigned long long int var_4 = 2010207056406001104ULL;
unsigned int var_9 = 3672447989U;
short var_10 = (short)-30728;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)254;
short var_17 = (short)9669;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
unsigned int var_19 = 834801105U;
unsigned long long int var_20 = 7039116088031281022ULL;
short var_21 = (short)-10768;
unsigned short var_22 = (unsigned short)9390;
unsigned short var_23 = (unsigned short)39839;
int var_24 = -500916632;
unsigned int var_25 = 2654630795U;
short var_26 = (short)23476;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)9625;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
_Bool arr_0 [15] [15] ;
_Bool arr_1 [15] ;
int arr_2 [15] ;
unsigned int arr_4 [10] [10] ;
_Bool arr_6 [10] ;
long long int arr_8 [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned char arr_11 [10] ;
unsigned long long int arr_15 [10] ;
int arr_16 [10] [10] [10] [10] ;
unsigned long long int arr_17 [10] ;
_Bool arr_3 [15] [15] ;
unsigned long long int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -2086312425;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1592849494U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -1927922223839991745LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8909885544549301775ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 7423092067275491663ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -587807352;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 734850016352399696ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 4585164248084412384ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
