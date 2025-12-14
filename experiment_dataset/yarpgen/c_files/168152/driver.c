#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26171;
unsigned int var_2 = 3856330582U;
int var_7 = -1434951741;
long long int var_8 = -3258803337656396249LL;
unsigned short var_13 = (unsigned short)55119;
unsigned long long int var_18 = 13790987547251583254ULL;
int zero = 0;
signed char var_19 = (signed char)64;
unsigned char var_20 = (unsigned char)126;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1083772471U;
unsigned short var_23 = (unsigned short)1960;
signed char var_24 = (signed char)-30;
unsigned short arr_0 [16] ;
unsigned short arr_4 [16] [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)2543;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)14251 : (short)26054;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
