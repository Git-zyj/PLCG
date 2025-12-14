#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15221979112676190901ULL;
unsigned long long int var_1 = 8694317347918623908ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 811721941U;
unsigned long long int var_13 = 8239124327707340106ULL;
unsigned long long int var_14 = 3777140649420639837ULL;
unsigned char var_15 = (unsigned char)96;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2329894972U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 4257955853037284939ULL;
unsigned long long int var_20 = 15677722677130550784ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)76;
unsigned int var_23 = 3838306508U;
long long int arr_0 [25] [25] ;
int arr_1 [25] [25] ;
long long int arr_2 [25] ;
signed char arr_3 [25] [25] ;
unsigned int arr_6 [25] [25] [25] ;
long long int arr_9 [25] ;
unsigned long long int arr_10 [25] ;
long long int arr_12 [25] [25] [25] [25] ;
_Bool arr_4 [25] ;
int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -2470214035556328049LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1211602631 : 891766262;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2463941708434258663LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)76 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1996986933U : 4142997913U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -6315894592321219117LL : 3402075102980746706LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 13063789211197698900ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -720141596832477121LL : 5301167341191932149LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -356807886 : -859201668;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
