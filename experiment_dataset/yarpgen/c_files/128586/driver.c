#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11037418547936234824ULL;
_Bool var_3 = (_Bool)1;
int var_6 = -1880854494;
int var_7 = -87630396;
unsigned long long int var_8 = 6479942150834380526ULL;
unsigned long long int var_10 = 15457776305620551240ULL;
long long int var_11 = -5105761147256310363LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 961394981;
unsigned short var_14 = (unsigned short)32942;
unsigned long long int var_15 = 910051733749418666ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-9811;
int arr_3 [14] [14] ;
signed char arr_4 [14] ;
_Bool arr_9 [14] [14] ;
unsigned long long int arr_10 [14] ;
unsigned int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 15902137;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 6015405977138914822ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 85004963U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
