#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55037;
unsigned int var_1 = 2076349605U;
unsigned int var_6 = 10712368U;
unsigned short var_7 = (unsigned short)38276;
int zero = 0;
unsigned int var_10 = 3495508846U;
long long int var_11 = 9106230944585843302LL;
unsigned char var_12 = (unsigned char)28;
long long int var_13 = 7382066603471700276LL;
unsigned char var_14 = (unsigned char)122;
unsigned char arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
int arr_2 [15] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)52 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)46266;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1002114116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 361890875 : 638886502;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
