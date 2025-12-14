#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18250;
long long int var_1 = -8221122419613478950LL;
int var_3 = 1419540186;
short var_4 = (short)-30767;
int var_5 = 281728682;
int var_8 = 92709725;
long long int var_10 = -5953084406194516683LL;
unsigned char var_11 = (unsigned char)6;
long long int var_13 = 399158663325969727LL;
long long int var_15 = -3441219235623201365LL;
int var_16 = -587524554;
int zero = 0;
unsigned char var_17 = (unsigned char)129;
unsigned long long int var_18 = 597797713768455864ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2977508072U;
_Bool var_21 = (_Bool)0;
int arr_0 [16] ;
unsigned short arr_1 [16] ;
int arr_2 [16] ;
unsigned int arr_12 [13] [13] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1893967020;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)21580;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1497397175;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 3816677440U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)1697;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
