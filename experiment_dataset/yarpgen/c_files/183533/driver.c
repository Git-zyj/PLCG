#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-108;
unsigned short var_4 = (unsigned short)36772;
unsigned short var_5 = (unsigned short)65014;
unsigned short var_6 = (unsigned short)51683;
unsigned short var_7 = (unsigned short)45294;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)31135;
unsigned char var_11 = (unsigned char)239;
signed char var_12 = (signed char)-85;
int zero = 0;
unsigned short var_14 = (unsigned short)28945;
unsigned char var_15 = (unsigned char)0;
unsigned int var_16 = 4060477094U;
unsigned char var_17 = (unsigned char)131;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)83;
unsigned char arr_0 [17] ;
unsigned char arr_2 [17] ;
unsigned int arr_3 [17] ;
_Bool arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)43 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1658236944U : 2114426834U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
