#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -50638700;
signed char var_1 = (signed char)-54;
unsigned int var_2 = 1586148013U;
int var_3 = 1166827729;
short var_4 = (short)24070;
unsigned int var_5 = 3725652640U;
int var_6 = -1686856531;
unsigned short var_8 = (unsigned short)35569;
unsigned long long int var_9 = 6639166841314631508ULL;
unsigned long long int var_10 = 7495409345529129185ULL;
int zero = 0;
signed char var_11 = (signed char)-116;
unsigned char var_12 = (unsigned char)153;
long long int var_13 = -4689028608018822222LL;
unsigned char var_14 = (unsigned char)255;
unsigned char var_15 = (unsigned char)242;
unsigned short var_16 = (unsigned short)33518;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1429217673841945967ULL;
long long int var_19 = 1507021890763532764LL;
_Bool var_20 = (_Bool)0;
int var_21 = 1222744517;
long long int var_22 = -8371982613721642362LL;
signed char var_23 = (signed char)-115;
unsigned int var_24 = 3009058304U;
unsigned int var_25 = 3642702717U;
unsigned int arr_2 [21] ;
signed char arr_13 [25] [25] ;
unsigned char arr_17 [13] [13] ;
unsigned char arr_20 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 279038445U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)75 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)11 : (unsigned char)3;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
