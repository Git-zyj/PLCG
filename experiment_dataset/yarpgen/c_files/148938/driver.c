#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 823943770;
unsigned int var_1 = 3073216780U;
unsigned short var_2 = (unsigned short)3741;
signed char var_3 = (signed char)101;
unsigned long long int var_4 = 15599176327136227567ULL;
signed char var_5 = (signed char)0;
unsigned long long int var_6 = 5902725741130785813ULL;
signed char var_7 = (signed char)-121;
signed char var_8 = (signed char)-13;
signed char var_10 = (signed char)-55;
signed char var_11 = (signed char)6;
int zero = 0;
int var_12 = 406696899;
unsigned int var_13 = 2226572945U;
unsigned long long int var_14 = 12060145169777315866ULL;
int var_15 = -757762083;
unsigned char var_16 = (unsigned char)187;
unsigned long long int var_17 = 2862961202985858002ULL;
short var_18 = (short)-6389;
signed char var_19 = (signed char)-90;
short arr_0 [16] ;
signed char arr_1 [16] [16] ;
_Bool arr_2 [16] [16] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-30543;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-49 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)51;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
