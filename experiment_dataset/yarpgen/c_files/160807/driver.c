#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1978098317;
unsigned short var_7 = (unsigned short)45996;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 6803222674654719770ULL;
unsigned long long int var_12 = 6159601846678273526ULL;
long long int var_13 = 1163588790253897260LL;
unsigned char var_14 = (unsigned char)209;
unsigned long long int var_15 = 7887359191486758721ULL;
long long int var_16 = -1393522156735619617LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int var_19 = 2076456898;
int var_20 = 98950304;
int arr_0 [23] ;
unsigned char arr_2 [23] ;
int arr_4 [23] ;
int arr_5 [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -392976270;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -1198808433;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -849322008;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 9879024200225638997ULL;
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
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
