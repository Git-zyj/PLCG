#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7887619423628662629LL;
unsigned long long int var_3 = 4278189615504685876ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)65027;
unsigned long long int var_10 = 2723358889571118967ULL;
unsigned int var_11 = 34107083U;
long long int var_12 = -930826875529887144LL;
int zero = 0;
int var_13 = -1179114884;
int var_14 = 1653434419;
unsigned int var_15 = 4114302557U;
unsigned short var_16 = (unsigned short)34420;
unsigned long long int var_17 = 15731073078047417740ULL;
_Bool arr_0 [13] ;
unsigned int arr_1 [13] ;
int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1204851304U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 1629584762;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
