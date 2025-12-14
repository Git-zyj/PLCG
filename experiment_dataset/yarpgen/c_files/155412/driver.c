#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1493786508;
unsigned short var_2 = (unsigned short)15592;
unsigned int var_3 = 3874547228U;
unsigned char var_5 = (unsigned char)195;
signed char var_6 = (signed char)(-127 - 1);
unsigned short var_8 = (unsigned short)60487;
signed char var_10 = (signed char)-111;
long long int var_11 = -3760252997443301993LL;
short var_13 = (short)27369;
signed char var_14 = (signed char)-59;
unsigned int var_17 = 3496366256U;
int zero = 0;
unsigned int var_18 = 2159114250U;
unsigned long long int var_19 = 14890092208218302566ULL;
unsigned char var_20 = (unsigned char)189;
unsigned char var_21 = (unsigned char)27;
unsigned long long int arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
_Bool arr_4 [24] ;
int arr_6 [24] ;
long long int arr_7 [24] ;
int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 12560125861204137069ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)2807;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1670020823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -2537100651667305970LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -592654182;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
