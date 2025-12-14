#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3075877236U;
unsigned short var_2 = (unsigned short)9577;
unsigned int var_3 = 600327970U;
int var_4 = 1834858150;
unsigned char var_6 = (unsigned char)152;
unsigned char var_7 = (unsigned char)36;
unsigned char var_9 = (unsigned char)92;
unsigned short var_10 = (unsigned short)33942;
unsigned short var_12 = (unsigned short)18020;
int var_14 = 628592428;
unsigned short var_16 = (unsigned short)61175;
unsigned char var_17 = (unsigned char)213;
int zero = 0;
unsigned short var_18 = (unsigned short)54099;
unsigned short var_19 = (unsigned short)49074;
unsigned short var_20 = (unsigned short)11087;
unsigned int var_21 = 4042109058U;
unsigned char var_22 = (unsigned char)68;
unsigned short var_23 = (unsigned short)53401;
unsigned int var_24 = 521585438U;
unsigned char arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
