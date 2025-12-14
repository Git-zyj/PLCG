#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 1717627818029942202ULL;
unsigned long long int var_2 = 4355588492025789399ULL;
short var_3 = (short)-15610;
short var_4 = (short)12782;
int var_5 = -969278469;
unsigned long long int var_7 = 392409490484039838ULL;
long long int var_8 = -641090917403132900LL;
int var_10 = -247148710;
unsigned long long int var_11 = 7938527597752524409ULL;
unsigned int var_12 = 225458586U;
unsigned long long int var_13 = 17285195403245416329ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11449636684020249686ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)2581;
int var_19 = 2016060176;
unsigned int arr_1 [14] ;
unsigned int arr_2 [14] ;
long long int arr_3 [14] [14] ;
_Bool arr_5 [14] [14] ;
int arr_6 [14] ;
unsigned int arr_7 [14] [14] ;
_Bool arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2117376679U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3584914U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -2995552478363790017LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1863057613 : 262494601;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 2960690672U : 502097626U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
