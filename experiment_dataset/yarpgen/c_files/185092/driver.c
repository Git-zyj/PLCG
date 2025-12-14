#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1045516948;
unsigned int var_1 = 2827454242U;
unsigned char var_2 = (unsigned char)203;
int var_3 = -1327626510;
long long int var_4 = 6307653972978785866LL;
int var_5 = 246148394;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1478592440U;
long long int var_8 = 8332525359022105489LL;
unsigned char var_9 = (unsigned char)24;
int zero = 0;
int var_10 = -910798762;
unsigned int var_11 = 620391734U;
short var_12 = (short)30368;
long long int var_13 = 6565274822981608783LL;
int var_14 = -1766717540;
unsigned short var_15 = (unsigned short)16322;
int var_16 = 1330415017;
short var_17 = (short)14859;
long long int var_18 = 2816263661775198194LL;
signed char arr_3 [18] ;
int arr_7 [10] [10] ;
long long int arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 1139532209;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = -2204351776191155249LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
