#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
unsigned char var_3 = (unsigned char)95;
unsigned short var_4 = (unsigned short)17786;
unsigned short var_8 = (unsigned short)48226;
long long int var_10 = 1449210872411431525LL;
int zero = 0;
int var_13 = -921855736;
unsigned short var_14 = (unsigned short)96;
short var_15 = (short)-26928;
_Bool var_16 = (_Bool)1;
long long int var_17 = -4518389729377935208LL;
long long int var_18 = -6508857993167255300LL;
short arr_0 [18] ;
signed char arr_2 [18] ;
short arr_5 [16] ;
int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)9767 : (short)29218;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)12892;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -356532953 : 1173773548;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
