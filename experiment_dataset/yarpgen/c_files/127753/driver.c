#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
long long int var_3 = -1860517881547361759LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-74;
long long int var_11 = 9134682905065698569LL;
signed char var_13 = (signed char)87;
long long int var_14 = -7125152029404911441LL;
int var_15 = -925220093;
int zero = 0;
unsigned int var_16 = 3027736157U;
unsigned char var_17 = (unsigned char)210;
signed char var_18 = (signed char)65;
_Bool arr_1 [16] ;
int arr_2 [16] ;
long long int arr_3 [16] [16] [16] ;
short arr_4 [16] ;
unsigned short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 597679696;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2534755290700991183LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)5969;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37237 : (unsigned short)53424;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
