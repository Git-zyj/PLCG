#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2459363477U;
unsigned int var_1 = 3103392839U;
unsigned short var_3 = (unsigned short)62716;
signed char var_4 = (signed char)4;
unsigned int var_6 = 2580819908U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 6214838709529102167LL;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned short var_12 = (unsigned short)27509;
unsigned int var_13 = 2444719329U;
unsigned char var_14 = (unsigned char)7;
long long int var_15 = -2709739623162745511LL;
unsigned int var_16 = 1835179392U;
unsigned long long int arr_0 [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_8 [24] [24] ;
unsigned int arr_3 [24] [24] ;
unsigned char arr_9 [24] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14422170944902449748ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)32393;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 792596184U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)94;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
