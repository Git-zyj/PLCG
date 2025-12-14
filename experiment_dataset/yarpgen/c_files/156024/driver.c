#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8406858989885673498LL;
unsigned char var_1 = (unsigned char)153;
unsigned int var_2 = 3493984575U;
unsigned short var_3 = (unsigned short)61751;
unsigned int var_5 = 915813917U;
long long int var_11 = -5164233581761415878LL;
unsigned int var_12 = 3986760875U;
int zero = 0;
unsigned char var_15 = (unsigned char)241;
unsigned int var_16 = 696758136U;
long long int var_17 = -3233014127103108574LL;
unsigned int var_18 = 371939260U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 155493840U;
short var_21 = (short)-6393;
unsigned int var_22 = 1564036574U;
unsigned char var_23 = (unsigned char)206;
short var_24 = (short)-2862;
unsigned int arr_0 [13] [13] ;
unsigned char arr_2 [13] [13] ;
short arr_3 [13] ;
unsigned short arr_4 [13] ;
unsigned int arr_8 [13] [13] [13] [13] ;
_Bool arr_9 [13] [13] ;
short arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 836160233U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)1259;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)22380;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 311994859U : 1826521252U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-6118 : (short)-31201;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
