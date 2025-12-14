#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
unsigned char var_3 = (unsigned char)28;
long long int var_4 = 565071893711151651LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)249;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)19902;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)124;
unsigned int var_17 = 1252922419U;
_Bool arr_0 [15] ;
long long int arr_2 [15] ;
_Bool arr_4 [15] [15] ;
int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1441111681358467261LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -540544763;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
