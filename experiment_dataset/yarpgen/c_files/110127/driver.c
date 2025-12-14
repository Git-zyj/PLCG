#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4090736033958581055ULL;
int var_2 = 227576105;
long long int var_3 = -4085729577425025065LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = -957381958;
unsigned char var_10 = (unsigned char)140;
unsigned int var_11 = 2632362457U;
unsigned int var_12 = 1085111397U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3961180536U;
unsigned long long int var_16 = 12034753892263995694ULL;
short var_17 = (short)12534;
unsigned char var_18 = (unsigned char)55;
long long int var_19 = 2986902984819284970LL;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
long long int arr_4 [23] ;
unsigned int arr_5 [23] ;
short arr_6 [23] [23] [23] [23] ;
long long int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1113936419U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 614839706U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 15921249396815728443ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -7301971142669979931LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1049527526U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-23968;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -5879685199898960690LL : 5584710855521940LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
