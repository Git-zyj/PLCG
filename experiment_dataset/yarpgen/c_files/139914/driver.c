#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)174;
unsigned char var_4 = (unsigned char)46;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_7 = 1383039744143390197ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)214;
int var_11 = -1030437695;
signed char var_12 = (signed char)-100;
unsigned short var_13 = (unsigned short)8427;
_Bool arr_0 [13] ;
unsigned char arr_4 [13] ;
signed char arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-32;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
