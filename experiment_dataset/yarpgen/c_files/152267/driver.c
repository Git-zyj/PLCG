#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-14097;
short var_6 = (short)-14808;
unsigned char var_7 = (unsigned char)36;
unsigned long long int var_8 = 8747141105261873018ULL;
unsigned short var_9 = (unsigned short)62399;
unsigned long long int var_10 = 7952832178250158107ULL;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
short var_14 = (short)2179;
long long int var_15 = -4188461901464524015LL;
unsigned char var_16 = (unsigned char)213;
short var_17 = (short)-2490;
int var_18 = -1846707481;
short arr_0 [11] [11] ;
int arr_2 [11] ;
short arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-17996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 434045716;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-32538;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
