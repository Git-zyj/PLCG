#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1993;
unsigned long long int var_1 = 4504610517232833748ULL;
unsigned long long int var_2 = 7044278734502681707ULL;
unsigned int var_4 = 1425356096U;
int var_5 = 110936136;
unsigned int var_6 = 822954036U;
unsigned short var_7 = (unsigned short)39980;
int var_13 = -917773029;
unsigned char var_15 = (unsigned char)157;
int zero = 0;
unsigned long long int var_16 = 3225027656045281324ULL;
unsigned int var_17 = 630215414U;
unsigned int var_18 = 4197717102U;
unsigned short arr_0 [20] ;
_Bool arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)14263;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
