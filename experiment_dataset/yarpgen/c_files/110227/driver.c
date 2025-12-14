#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -3200258746937347557LL;
unsigned short var_2 = (unsigned short)22597;
unsigned char var_3 = (unsigned char)41;
unsigned short var_4 = (unsigned short)35508;
short var_5 = (short)-9335;
unsigned short var_6 = (unsigned short)17751;
unsigned long long int var_7 = 11754656975254279244ULL;
signed char var_8 = (signed char)-92;
short var_9 = (short)5128;
int zero = 0;
long long int var_10 = -351412118828539351LL;
unsigned int var_11 = 1662371081U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10728944764899305272ULL;
_Bool var_14 = (_Bool)1;
long long int arr_3 [18] ;
short arr_6 [20] ;
unsigned char arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 4271209405380051987LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)30862;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)96;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
