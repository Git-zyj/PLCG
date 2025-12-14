#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned long long int var_1 = 7924897267643349707ULL;
unsigned int var_3 = 1093745345U;
unsigned long long int var_4 = 274380134558282927ULL;
unsigned char var_5 = (unsigned char)64;
unsigned char var_6 = (unsigned char)165;
unsigned char var_7 = (unsigned char)182;
unsigned char var_8 = (unsigned char)203;
signed char var_10 = (signed char)82;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-15;
short var_14 = (short)20883;
signed char var_15 = (signed char)-82;
unsigned short var_16 = (unsigned short)65040;
unsigned int var_17 = 119416107U;
unsigned long long int var_18 = 8412121163127967866ULL;
signed char var_19 = (signed char)-60;
long long int var_20 = 6674262928130276471LL;
long long int var_21 = 8595250988735002008LL;
int var_22 = -137318639;
short var_23 = (short)3421;
unsigned char arr_1 [16] ;
unsigned char arr_3 [16] ;
unsigned int arr_4 [16] [16] [16] ;
unsigned char arr_7 [16] ;
signed char arr_8 [16] [16] ;
short arr_15 [16] [16] [16] ;
_Bool arr_16 [16] [16] [16] ;
signed char arr_11 [16] [16] ;
signed char arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1723095576U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)124 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)31907 : (short)10353;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-122 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)17;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
