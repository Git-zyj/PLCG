#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 575372567U;
int var_5 = 497681420;
long long int var_8 = 8498408820776699892LL;
unsigned char var_9 = (unsigned char)230;
unsigned long long int var_11 = 9731131974531191466ULL;
int zero = 0;
long long int var_14 = 19754773785120721LL;
long long int var_15 = -2569488881816154785LL;
long long int var_16 = -2531956110718471980LL;
long long int arr_0 [12] ;
long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1061362860539251182LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2099534199254183923LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)11272;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47279;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 4132551207U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)57728;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
