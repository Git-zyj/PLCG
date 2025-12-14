#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16242443326356795692ULL;
unsigned int var_2 = 2404849772U;
unsigned long long int var_3 = 10716477290102727237ULL;
unsigned long long int var_5 = 5124349384020539165ULL;
unsigned int var_7 = 200013084U;
unsigned int var_9 = 2507515531U;
unsigned long long int var_10 = 10083438714338624134ULL;
short var_11 = (short)1501;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7779512093211782150LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6094112874560701979ULL;
unsigned long long int var_19 = 17393802194357543770ULL;
signed char var_20 = (signed char)-21;
_Bool arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned int arr_2 [13] [13] ;
unsigned long long int arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned long long int arr_9 [13] ;
short arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 17456492399837673130ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2936831233U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 16309236697140528425ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1232604987U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 18302547359989254766ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (short)20548;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
