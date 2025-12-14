#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 752606563;
signed char var_4 = (signed char)101;
int var_7 = -2112441078;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)9403;
unsigned long long int var_14 = 8822993952951797413ULL;
unsigned int var_17 = 1817434131U;
int zero = 0;
unsigned char var_18 = (unsigned char)197;
unsigned short var_19 = (unsigned short)53776;
_Bool var_20 = (_Bool)0;
signed char arr_0 [15] ;
unsigned short arr_1 [15] ;
_Bool arr_2 [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)41713;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-26194 : (short)23516;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
