#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5866468925936772239LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)47787;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-98;
int zero = 0;
unsigned short var_13 = (unsigned short)7697;
signed char var_14 = (signed char)-117;
_Bool var_15 = (_Bool)0;
unsigned char arr_0 [11] ;
long long int arr_3 [11] ;
unsigned char arr_6 [11] ;
unsigned short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -7086830051967256019LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)54536;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
