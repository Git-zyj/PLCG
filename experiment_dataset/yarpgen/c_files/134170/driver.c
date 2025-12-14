#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8509176120549301463ULL;
unsigned char var_7 = (unsigned char)247;
unsigned long long int var_12 = 14011137031315418204ULL;
int zero = 0;
long long int var_13 = 7761677892854091117LL;
unsigned char var_14 = (unsigned char)191;
short var_15 = (short)-8454;
unsigned short var_16 = (unsigned short)59314;
int var_17 = -453665506;
signed char var_18 = (signed char)47;
unsigned long long int var_19 = 15168813933265013681ULL;
long long int arr_0 [16] ;
unsigned char arr_2 [16] ;
unsigned long long int arr_4 [18] [18] ;
unsigned short arr_5 [18] ;
short arr_8 [15] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6920960593142075608LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 9407031638745758103ULL : 10489592651726769237ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10810 : (unsigned short)19496;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)-29251;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2053555979;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
