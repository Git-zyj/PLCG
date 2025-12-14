#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2666779471U;
unsigned int var_1 = 1259809315U;
unsigned char var_2 = (unsigned char)210;
short var_3 = (short)26842;
short var_5 = (short)3302;
unsigned short var_6 = (unsigned short)64593;
unsigned int var_7 = 1635447421U;
long long int var_8 = 4120496976128192362LL;
unsigned int var_9 = 2217371239U;
long long int var_10 = 5652281918452793181LL;
signed char var_11 = (signed char)-13;
int zero = 0;
unsigned int var_15 = 3101926858U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 613405521U;
unsigned long long int var_18 = 7834198430502950083ULL;
unsigned short arr_0 [16] ;
unsigned char arr_1 [16] ;
short arr_5 [16] [16] [16] ;
unsigned char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2767 : (unsigned short)64420;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)20100 : (short)-15953;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)140;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
