#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned char var_2 = (unsigned char)149;
unsigned char var_4 = (unsigned char)236;
int var_5 = 229066408;
unsigned char var_13 = (unsigned char)41;
signed char var_17 = (signed char)-124;
int zero = 0;
signed char var_19 = (signed char)-119;
unsigned char var_20 = (unsigned char)29;
signed char var_21 = (signed char)53;
signed char var_22 = (signed char)-20;
signed char var_23 = (signed char)-40;
unsigned long long int var_24 = 15027973059729963019ULL;
unsigned char var_25 = (unsigned char)196;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned char arr_4 [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned long long int arr_7 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 13687372510587175171ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 4114089694421638281ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2280501979932931826ULL : 3513478698760757346ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
