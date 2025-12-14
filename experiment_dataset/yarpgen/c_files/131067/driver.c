#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)166;
unsigned char var_4 = (unsigned char)69;
long long int var_8 = 1948928379887344973LL;
unsigned char var_11 = (unsigned char)191;
unsigned long long int var_12 = 10870417933073407291ULL;
int zero = 0;
long long int var_13 = 7165623770905297118LL;
short var_14 = (short)-27989;
unsigned long long int var_15 = 15075370257130723805ULL;
unsigned long long int var_16 = 10431665729769658664ULL;
short arr_0 [10] ;
unsigned long long int arr_1 [10] ;
signed char arr_2 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)26881;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 292684335010363331ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
