#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1273289058;
unsigned long long int var_3 = 11133962893184724113ULL;
unsigned int var_5 = 1403233114U;
int var_6 = -483125902;
unsigned char var_7 = (unsigned char)54;
int var_11 = 1576097804;
unsigned int var_12 = 1037028729U;
unsigned long long int var_13 = 9552228164186010523ULL;
signed char var_14 = (signed char)44;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 630526730U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2442224905U;
unsigned int var_19 = 3598088316U;
unsigned int var_20 = 1669653088U;
unsigned short var_21 = (unsigned short)37782;
unsigned short var_22 = (unsigned short)27967;
long long int var_23 = -4711625170001833652LL;
unsigned long long int var_24 = 9545010006486080274ULL;
unsigned char var_25 = (unsigned char)11;
unsigned int arr_0 [20] ;
int arr_2 [25] [25] ;
signed char arr_3 [25] [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
signed char arr_7 [20] [20] ;
int arr_9 [20] ;
int arr_10 [20] ;
unsigned char arr_13 [20] ;
unsigned int arr_14 [20] ;
unsigned int arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2319565657U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -448448656;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 696237346U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 5498412103297831574ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = -1152407621;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -2129740379;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 2964110897U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 2912979132U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
