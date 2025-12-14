#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-78;
int var_5 = -1286870896;
unsigned long long int var_6 = 2654554211549774305ULL;
long long int var_14 = -2223304924327141366LL;
unsigned long long int var_15 = 4422971793732088786ULL;
unsigned long long int var_16 = 4069415651917576030ULL;
long long int var_17 = -6418989370013975985LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2370066669375067424ULL;
unsigned long long int var_20 = 2027921125422282099ULL;
int var_21 = 335768070;
unsigned long long int var_22 = 17386759311556008762ULL;
unsigned char var_23 = (unsigned char)235;
signed char var_24 = (signed char)-71;
short var_25 = (short)16532;
signed char var_26 = (signed char)1;
unsigned long long int arr_0 [18] ;
long long int arr_1 [18] ;
_Bool arr_2 [18] ;
unsigned long long int arr_4 [13] ;
unsigned long long int arr_5 [13] ;
unsigned short arr_8 [13] ;
unsigned short arr_9 [13] [13] ;
unsigned short arr_3 [18] [18] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3657183949802104608ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3717300789813023260LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4888135531692132443ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 18039636770058147554ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)6650;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)40436;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)15864;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 6096688743055433143ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 2291909890921842082ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
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
