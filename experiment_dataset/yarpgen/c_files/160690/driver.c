#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_2 = (short)10409;
unsigned int var_3 = 455783167U;
unsigned char var_6 = (unsigned char)6;
unsigned char var_9 = (unsigned char)130;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-120;
short var_14 = (short)-13129;
short var_16 = (short)20115;
unsigned char var_17 = (unsigned char)255;
long long int var_18 = 5464007926792615529LL;
long long int var_19 = 6726291425022956817LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -102793209166792835LL;
unsigned long long int var_22 = 4158112742471886356ULL;
unsigned char var_23 = (unsigned char)251;
signed char var_24 = (signed char)32;
short var_25 = (short)-13574;
unsigned short arr_0 [13] ;
short arr_1 [13] [13] ;
_Bool arr_2 [13] ;
int arr_5 [13] [13] ;
unsigned int arr_3 [13] ;
_Bool arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)40824;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-22679;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -1625079774;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4222129747U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
