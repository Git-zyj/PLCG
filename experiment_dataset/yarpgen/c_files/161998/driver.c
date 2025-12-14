#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3029441956U;
short var_3 = (short)-6141;
long long int var_5 = -3975859609731097540LL;
unsigned int var_7 = 296257761U;
unsigned char var_9 = (unsigned char)132;
int var_11 = -905596773;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7877896891828617440LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-81;
int var_21 = 1269691483;
signed char var_22 = (signed char)23;
signed char var_23 = (signed char)5;
signed char var_24 = (signed char)-124;
long long int var_25 = 8006498162964165392LL;
_Bool var_26 = (_Bool)1;
_Bool arr_0 [13] [13] ;
_Bool arr_1 [13] ;
long long int arr_2 [13] [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 4253482261694922253LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)45;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
