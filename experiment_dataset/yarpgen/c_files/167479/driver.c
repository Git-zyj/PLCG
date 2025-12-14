#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
signed char var_4 = (signed char)69;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)60;
long long int var_7 = 5338851674133449620LL;
short var_8 = (short)-29988;
unsigned short var_9 = (unsigned short)48551;
unsigned char var_11 = (unsigned char)21;
short var_12 = (short)3462;
int zero = 0;
short var_13 = (short)24176;
unsigned char var_14 = (unsigned char)87;
short var_15 = (short)12347;
short var_16 = (short)2222;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)42787;
unsigned char var_19 = (unsigned char)161;
short arr_1 [14] ;
signed char arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)30795;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
