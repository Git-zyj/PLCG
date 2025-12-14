#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned char var_2 = (unsigned char)207;
unsigned char var_5 = (unsigned char)140;
unsigned char var_7 = (unsigned char)229;
unsigned int var_9 = 1622983224U;
unsigned int var_10 = 646867985U;
unsigned char var_11 = (unsigned char)251;
signed char var_13 = (signed char)-79;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
unsigned int var_16 = 641725909U;
unsigned int var_17 = 1790574506U;
unsigned char var_18 = (unsigned char)98;
signed char var_19 = (signed char)108;
unsigned int var_20 = 1112892906U;
signed char var_21 = (signed char)-69;
signed char var_22 = (signed char)85;
unsigned char var_23 = (unsigned char)6;
signed char arr_0 [16] [16] ;
unsigned int arr_1 [16] [16] ;
unsigned int arr_3 [16] [16] ;
signed char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2266614854U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 595325209U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-60;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
