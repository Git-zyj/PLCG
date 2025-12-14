#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2134;
int var_5 = -892726763;
unsigned char var_8 = (unsigned char)172;
int var_10 = -1760605253;
long long int var_12 = 4026313458797068664LL;
long long int var_13 = -6084865114049094571LL;
long long int var_14 = 1884601240769881682LL;
unsigned char var_15 = (unsigned char)26;
int zero = 0;
signed char var_16 = (signed char)13;
int var_17 = -879665204;
signed char var_18 = (signed char)-126;
int var_19 = -2063474342;
short var_20 = (short)16134;
short var_21 = (short)-32317;
long long int var_22 = 113726987132774101LL;
signed char arr_5 [15] ;
unsigned long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 1320332526158244610ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
