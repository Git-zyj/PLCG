#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4194648168U;
signed char var_4 = (signed char)-122;
signed char var_5 = (signed char)-107;
signed char var_6 = (signed char)95;
signed char var_7 = (signed char)92;
unsigned int var_8 = 4151113333U;
short var_11 = (short)6668;
unsigned int var_13 = 4106072550U;
unsigned int var_14 = 1454281591U;
int zero = 0;
unsigned short var_15 = (unsigned short)55055;
unsigned int var_16 = 738491178U;
unsigned int var_17 = 329249823U;
unsigned int var_18 = 3444755772U;
signed char var_19 = (signed char)-15;
signed char var_20 = (signed char)-37;
signed char var_21 = (signed char)-27;
unsigned short arr_0 [22] ;
unsigned int arr_2 [22] ;
short arr_3 [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)58343;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3026819418U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-21289 : (short)-30505;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)-97;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
