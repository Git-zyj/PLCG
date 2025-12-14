#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
long long int var_1 = 1917539813979226193LL;
unsigned short var_2 = (unsigned short)20814;
unsigned char var_4 = (unsigned char)133;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 639468337U;
unsigned int var_7 = 2439714044U;
signed char var_8 = (signed char)-16;
unsigned int var_9 = 3486401992U;
int zero = 0;
unsigned int var_10 = 680045527U;
long long int var_11 = -3128253701648456046LL;
short var_12 = (short)-9818;
unsigned int var_13 = 3893890818U;
unsigned char var_14 = (unsigned char)138;
long long int arr_2 [14] [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
short arr_5 [14] ;
long long int arr_6 [14] [14] [14] ;
unsigned short arr_9 [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1879860769401185883LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13276064228367332435ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-20351;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -3472413814298710917LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62922;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
