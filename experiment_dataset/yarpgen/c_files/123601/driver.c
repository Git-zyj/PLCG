#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2461191222518602336LL;
short var_5 = (short)-12781;
unsigned long long int var_6 = 6505677987615995046ULL;
short var_7 = (short)20147;
unsigned short var_11 = (unsigned short)38482;
unsigned int var_12 = 2456583844U;
int zero = 0;
unsigned char var_13 = (unsigned char)180;
unsigned char var_14 = (unsigned char)243;
unsigned char var_15 = (unsigned char)225;
unsigned char var_16 = (unsigned char)108;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-3914;
short var_19 = (short)-10280;
unsigned short arr_0 [10] [10] ;
unsigned char arr_3 [10] ;
_Bool arr_4 [10] ;
long long int arr_10 [25] [25] ;
long long int arr_8 [10] [10] ;
long long int arr_9 [10] ;
unsigned char arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20258;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = -6175469963859865064LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3871762960425562712LL : 7423501637911251917LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4313894348264419013LL : 4961456760903732493LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
