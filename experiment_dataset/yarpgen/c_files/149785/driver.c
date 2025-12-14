#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -8698789064323604111LL;
signed char var_3 = (signed char)75;
_Bool var_4 = (_Bool)1;
short var_5 = (short)23636;
unsigned int var_7 = 4158445998U;
unsigned char var_8 = (unsigned char)196;
unsigned short var_12 = (unsigned short)42359;
unsigned short var_14 = (unsigned short)21350;
int zero = 0;
unsigned char var_15 = (unsigned char)175;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-24390;
unsigned short var_18 = (unsigned short)18604;
unsigned int var_19 = 568714900U;
_Bool arr_0 [16] [16] ;
int arr_1 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1257515842 : 1661026054;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)23;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
