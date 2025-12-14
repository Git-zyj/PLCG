#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned int var_1 = 1740277208U;
unsigned short var_6 = (unsigned short)20515;
unsigned short var_11 = (unsigned short)41176;
unsigned short var_12 = (unsigned short)60696;
unsigned int var_14 = 2903977442U;
unsigned long long int var_15 = 9597939793246396535ULL;
int zero = 0;
int var_16 = -1725769925;
unsigned long long int var_17 = 551962116933408705ULL;
unsigned int var_18 = 3020426321U;
unsigned int var_19 = 1128495187U;
unsigned int var_20 = 1739256220U;
int arr_0 [15] ;
unsigned short arr_2 [15] ;
int arr_5 [15] [15] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1177014291;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)65406;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 390320150;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -5398744504268069325LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
