#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1270986007U;
unsigned long long int var_5 = 2993107118895587430ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6084572724521190267LL;
unsigned int var_13 = 2858946862U;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3846000127019776740LL;
long long int var_21 = 5857949186409960411LL;
long long int var_22 = 6885629999635415920LL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2182961300U;
int var_25 = -248398595;
unsigned int var_26 = 302712588U;
unsigned long long int var_27 = 15553222729057245719ULL;
long long int arr_0 [13] ;
int arr_1 [13] ;
long long int arr_2 [16] [16] ;
unsigned short arr_11 [10] ;
int arr_9 [19] ;
long long int arr_10 [19] [19] ;
int arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1628854669038067792LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1613219935;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -900674914782482678LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)49213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 1620099533;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -5730834137183879695LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = -457169544;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
