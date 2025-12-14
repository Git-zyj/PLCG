#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38831;
unsigned short var_2 = (unsigned short)50543;
int var_3 = 1784172325;
int var_5 = 343372726;
unsigned long long int var_6 = 8789297520556011782ULL;
unsigned int var_7 = 940107650U;
unsigned long long int var_10 = 13923326976917778237ULL;
unsigned long long int var_11 = 10638844034876385189ULL;
long long int var_13 = -8317438569263516487LL;
int zero = 0;
unsigned long long int var_16 = 1850776584585727596ULL;
unsigned char var_17 = (unsigned char)52;
long long int var_18 = 1201660907390023734LL;
long long int var_19 = 1553645178378676535LL;
unsigned long long int var_20 = 10422268404107776770ULL;
unsigned short var_21 = (unsigned short)61787;
long long int var_22 = -473250532434486609LL;
int var_23 = -233114218;
short var_24 = (short)2909;
short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
long long int arr_3 [18] [18] ;
unsigned int arr_6 [18] ;
short arr_9 [19] ;
long long int arr_11 [19] ;
unsigned long long int arr_2 [18] [18] ;
short arr_7 [18] ;
unsigned char arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16992;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 6261174762503704103ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -3560601328464790383LL : 3791041595205085547LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4120832463U : 3535572382U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-21820;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8314844135965821879LL : -105899760784896408LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 4566616683774420866ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)11437 : (short)2367;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)50;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
