#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55640;
signed char var_7 = (signed char)68;
unsigned int var_10 = 1100294242U;
signed char var_11 = (signed char)-3;
long long int var_12 = -5513591959184852714LL;
short var_13 = (short)9447;
int zero = 0;
unsigned long long int var_15 = 16418538834545947168ULL;
short var_16 = (short)-31979;
unsigned int var_17 = 4222297408U;
short var_18 = (short)-32038;
long long int var_19 = 9155162259840459962LL;
unsigned short var_20 = (unsigned short)59356;
int var_21 = 1815411144;
_Bool var_22 = (_Bool)1;
int arr_1 [13] ;
short arr_2 [13] ;
unsigned int arr_5 [25] ;
unsigned int arr_7 [25] ;
unsigned short arr_8 [25] [25] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1491118209;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-30259;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3451616805U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2520315734U : 1675413134U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)38846;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
