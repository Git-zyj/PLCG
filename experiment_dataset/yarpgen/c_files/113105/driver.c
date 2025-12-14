#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23640;
unsigned char var_3 = (unsigned char)158;
unsigned short var_4 = (unsigned short)33312;
signed char var_7 = (signed char)-33;
long long int var_9 = -698049688318472375LL;
unsigned int var_10 = 3309793194U;
long long int var_13 = -4026296846637587737LL;
int zero = 0;
unsigned short var_14 = (unsigned short)41189;
short var_15 = (short)22546;
int var_16 = 1583226185;
unsigned char var_17 = (unsigned char)16;
unsigned int var_18 = 3098167495U;
unsigned char arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 6431195483211262783ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)100;
}

void checksum() {
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
