#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1785126600U;
signed char var_4 = (signed char)46;
unsigned int var_5 = 73245792U;
unsigned short var_10 = (unsigned short)2599;
unsigned short var_11 = (unsigned short)42274;
unsigned char var_12 = (unsigned char)99;
long long int var_15 = 6693459132140722395LL;
unsigned char var_16 = (unsigned char)155;
signed char var_18 = (signed char)-44;
short var_19 = (short)347;
int zero = 0;
long long int var_20 = -1951262866699885600LL;
signed char var_21 = (signed char)-101;
unsigned int var_22 = 1879031131U;
unsigned int arr_0 [11] ;
unsigned short arr_3 [11] ;
long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2506857562U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)51850;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1512703364546334160LL : -3494113358748375404LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
