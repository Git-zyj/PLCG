#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42923;
short var_3 = (short)-22713;
unsigned int var_5 = 956899839U;
int var_7 = -1962744286;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)88;
int var_10 = 199913759;
unsigned char var_13 = (unsigned char)255;
unsigned short var_14 = (unsigned short)64054;
int zero = 0;
signed char var_15 = (signed char)-60;
unsigned short var_16 = (unsigned short)49036;
short var_17 = (short)310;
long long int var_18 = 6351253914913342417LL;
short var_19 = (short)3255;
unsigned long long int var_20 = 14388928258502610965ULL;
unsigned int var_21 = 3317964920U;
_Bool arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
short arr_2 [20] ;
int arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2314032305U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)31395;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1150685986;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -1757221038 : 33162692;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
