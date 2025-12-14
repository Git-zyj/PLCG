#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 744290325U;
unsigned int var_3 = 3691252631U;
unsigned char var_5 = (unsigned char)235;
int var_7 = -855810844;
short var_8 = (short)-8297;
unsigned int var_9 = 2258681205U;
short var_10 = (short)-21116;
short var_13 = (short)6762;
unsigned short var_15 = (unsigned short)26661;
int zero = 0;
int var_16 = 2002727567;
int var_17 = 447474179;
signed char var_18 = (signed char)-66;
unsigned short var_19 = (unsigned short)27644;
unsigned char var_20 = (unsigned char)139;
signed char var_21 = (signed char)3;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
unsigned char arr_2 [17] [17] ;
int arr_7 [11] ;
unsigned char arr_3 [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2869938016U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1624265310U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 208244916;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2180834300U : 2966273645U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
