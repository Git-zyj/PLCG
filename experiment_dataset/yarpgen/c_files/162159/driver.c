#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)75;
signed char var_3 = (signed char)-96;
unsigned char var_4 = (unsigned char)10;
signed char var_5 = (signed char)-94;
unsigned char var_6 = (unsigned char)107;
unsigned char var_7 = (unsigned char)235;
signed char var_8 = (signed char)11;
signed char var_9 = (signed char)-80;
signed char var_11 = (signed char)84;
unsigned char var_12 = (unsigned char)214;
signed char var_14 = (signed char)-78;
int zero = 0;
signed char var_15 = (signed char)16;
signed char var_16 = (signed char)97;
unsigned char var_17 = (unsigned char)27;
signed char var_18 = (signed char)116;
signed char var_19 = (signed char)119;
unsigned char var_20 = (unsigned char)89;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
unsigned char arr_3 [16] ;
signed char arr_4 [16] ;
signed char arr_5 [16] [16] ;
unsigned char arr_6 [16] [16] ;
unsigned char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)48;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
