#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned int var_2 = 1024624773U;
short var_3 = (short)-31805;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)15;
unsigned char var_8 = (unsigned char)101;
unsigned long long int var_11 = 6663663246596390239ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 210386519;
int zero = 0;
unsigned short var_14 = (unsigned short)64553;
_Bool var_15 = (_Bool)0;
int var_16 = -1769849892;
unsigned char arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_4 [14] ;
short arr_5 [14] ;
unsigned short arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 12394117576505906734ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 7353914596826980753ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-8293;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)28554;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
