#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44359;
int var_2 = -965868287;
short var_6 = (short)17276;
long long int var_10 = -5202932033504177059LL;
unsigned int var_13 = 3986894789U;
int var_14 = -1279656574;
int zero = 0;
signed char var_15 = (signed char)51;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)203;
long long int var_18 = 1171709079538799672LL;
unsigned long long int var_19 = 11659029120908834775ULL;
_Bool var_20 = (_Bool)0;
_Bool arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] ;
unsigned short arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1005 : (unsigned short)17644;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
