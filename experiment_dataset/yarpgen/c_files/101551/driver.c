#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63823;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16561534259647433046ULL;
unsigned short var_3 = (unsigned short)24834;
unsigned short var_8 = (unsigned short)30859;
long long int var_9 = -7466743411589911282LL;
unsigned short var_11 = (unsigned short)24266;
int zero = 0;
unsigned short var_12 = (unsigned short)17657;
short var_13 = (short)-1612;
int var_14 = 230198420;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2009846731861843797ULL;
unsigned long long int var_17 = 7702160614626983842ULL;
unsigned int var_18 = 675306070U;
short arr_0 [11] ;
short arr_1 [11] [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)17156;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-18295;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)84;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
