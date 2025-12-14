#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7194826045383257398LL;
unsigned short var_3 = (unsigned short)63220;
unsigned short var_4 = (unsigned short)22102;
short var_9 = (short)13360;
unsigned long long int var_11 = 14273159693700149594ULL;
unsigned char var_13 = (unsigned char)212;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-122;
unsigned long long int var_18 = 11021444720510872534ULL;
int var_19 = 1235863418;
long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8459254280170423048LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)53674;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 1961195988082584969ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
