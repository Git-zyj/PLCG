#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned char var_2 = (unsigned char)187;
unsigned char var_4 = (unsigned char)34;
unsigned char var_5 = (unsigned char)238;
unsigned char var_6 = (unsigned char)183;
unsigned char var_7 = (unsigned char)224;
unsigned char var_8 = (unsigned char)175;
unsigned char var_9 = (unsigned char)147;
unsigned char var_10 = (unsigned char)232;
unsigned char var_12 = (unsigned char)37;
unsigned char var_13 = (unsigned char)89;
unsigned char var_14 = (unsigned char)227;
unsigned char var_16 = (unsigned char)200;
unsigned char var_17 = (unsigned char)179;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
unsigned char var_19 = (unsigned char)11;
unsigned char var_20 = (unsigned char)171;
unsigned char var_21 = (unsigned char)182;
unsigned char var_22 = (unsigned char)140;
unsigned char var_23 = (unsigned char)253;
unsigned char var_24 = (unsigned char)28;
unsigned char var_25 = (unsigned char)37;
unsigned char var_26 = (unsigned char)247;
unsigned char arr_2 [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned char arr_11 [18] [18] ;
unsigned char arr_20 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)222;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
