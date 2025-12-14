#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
int var_1 = 827656709;
int var_4 = -1611269678;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-19741;
unsigned short var_8 = (unsigned short)997;
int var_10 = -778360861;
int var_12 = -828310183;
int var_13 = -402240889;
int zero = 0;
signed char var_19 = (signed char)-12;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)123;
int var_22 = 1050194361;
unsigned short var_23 = (unsigned short)60725;
long long int var_24 = 1133135579057433995LL;
signed char var_25 = (signed char)58;
short arr_0 [13] ;
unsigned int arr_2 [13] ;
_Bool arr_6 [15] ;
int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-21114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3287226935U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 618340592;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
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
