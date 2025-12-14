#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
signed char var_4 = (signed char)-100;
unsigned char var_6 = (unsigned char)253;
unsigned char var_8 = (unsigned char)251;
unsigned char var_9 = (unsigned char)255;
unsigned char var_11 = (unsigned char)150;
unsigned char var_12 = (unsigned char)128;
unsigned char var_16 = (unsigned char)19;
int zero = 0;
short var_18 = (short)-2085;
signed char var_19 = (signed char)-81;
signed char var_20 = (signed char)-96;
unsigned char var_21 = (unsigned char)135;
short var_22 = (short)-13655;
unsigned char var_23 = (unsigned char)103;
unsigned char var_24 = (unsigned char)75;
short arr_0 [16] [16] ;
short arr_1 [16] [16] ;
signed char arr_4 [23] ;
unsigned char arr_6 [23] ;
unsigned char arr_2 [16] [16] ;
unsigned char arr_11 [24] ;
signed char arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)27287;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5530;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)-22;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
