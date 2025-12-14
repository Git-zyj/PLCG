#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned int var_3 = 232961680U;
unsigned long long int var_5 = 7257087723455191752ULL;
unsigned char var_8 = (unsigned char)72;
unsigned short var_10 = (unsigned short)11590;
unsigned char var_11 = (unsigned char)111;
_Bool var_12 = (_Bool)0;
int var_13 = 302178419;
int zero = 0;
int var_15 = -1695530844;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8062293846208290621LL;
int arr_1 [16] ;
unsigned char arr_2 [16] ;
signed char arr_3 [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2010192023;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 18222431712070812320ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
