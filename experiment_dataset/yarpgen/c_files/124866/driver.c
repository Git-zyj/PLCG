#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
int var_1 = 575376321;
unsigned char var_2 = (unsigned char)201;
unsigned short var_5 = (unsigned short)51889;
unsigned char var_6 = (unsigned char)98;
int var_7 = 1558224783;
int var_8 = -307130705;
unsigned char var_9 = (unsigned char)5;
unsigned short var_10 = (unsigned short)39883;
unsigned short var_14 = (unsigned short)11353;
int zero = 0;
int var_15 = -196295766;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)246;
int var_18 = -1307830371;
unsigned char var_19 = (unsigned char)24;
unsigned short var_20 = (unsigned short)64538;
unsigned long long int arr_0 [15] ;
int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
int arr_5 [15] [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 5967113994716427974ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1453110050;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1155368197;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)69;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
