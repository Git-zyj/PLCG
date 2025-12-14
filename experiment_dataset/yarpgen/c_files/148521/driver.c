#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33894;
long long int var_4 = 1055376909228375804LL;
unsigned long long int var_5 = 13804438604984288979ULL;
short var_7 = (short)30372;
int var_9 = -1194569772;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
short var_12 = (short)12858;
unsigned long long int var_13 = 5132932996422803470ULL;
unsigned int var_14 = 1255783599U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1638290200U;
unsigned int var_17 = 3198889861U;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
_Bool arr_2 [14] [14] ;
long long int arr_3 [14] ;
unsigned int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)6538;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)43625;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -217610008808491522LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2048692940U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
