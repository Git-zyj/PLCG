#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3529398658140732333ULL;
unsigned long long int var_4 = 14506326603287692704ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 879873397U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 49329663U;
unsigned int var_10 = 3254507582U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11380632474005824679ULL;
unsigned int var_15 = 3348167678U;
unsigned long long int var_16 = 6758873485505381703ULL;
unsigned int arr_0 [18] [18] ;
_Bool arr_1 [18] ;
unsigned long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1161744352U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 4222470040194435035ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
