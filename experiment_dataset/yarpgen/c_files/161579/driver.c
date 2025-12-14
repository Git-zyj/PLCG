#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned long long int var_1 = 2740433178127734230ULL;
short var_2 = (short)3275;
unsigned char var_5 = (unsigned char)130;
unsigned int var_6 = 3856421268U;
short var_7 = (short)-18009;
signed char var_8 = (signed char)-34;
int zero = 0;
short var_11 = (short)-30498;
unsigned short var_12 = (unsigned short)25080;
short var_13 = (short)-19976;
long long int var_14 = -4300191230820714941LL;
unsigned short var_15 = (unsigned short)35217;
long long int var_16 = -3097140561758896862LL;
int arr_0 [23] ;
short arr_1 [23] ;
unsigned char arr_2 [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1568284317;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)24419;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1241565627;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
