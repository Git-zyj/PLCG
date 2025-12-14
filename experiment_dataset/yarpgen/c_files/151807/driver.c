#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32322;
unsigned char var_5 = (unsigned char)238;
unsigned short var_6 = (unsigned short)64604;
unsigned char var_7 = (unsigned char)80;
unsigned long long int var_8 = 10402814323495560938ULL;
unsigned char var_10 = (unsigned char)130;
unsigned long long int var_12 = 15855971281398510406ULL;
long long int var_13 = 7992380127400163106LL;
unsigned short var_14 = (unsigned short)58042;
unsigned int var_19 = 3274364915U;
int zero = 0;
unsigned char var_20 = (unsigned char)63;
unsigned short arr_1 [23] ;
int arr_3 [23] ;
int arr_10 [23] [23] ;
int arr_11 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)51354;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 797824803;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -219922260 : 202190409;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1311467963 : 534975805;
}

void checksum() {
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
