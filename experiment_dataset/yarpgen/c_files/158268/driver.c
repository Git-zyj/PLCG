#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30366;
signed char var_5 = (signed char)48;
signed char var_6 = (signed char)101;
unsigned int var_7 = 2926977128U;
unsigned char var_11 = (unsigned char)72;
signed char var_13 = (signed char)-5;
unsigned short var_14 = (unsigned short)33830;
unsigned char var_15 = (unsigned char)86;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
unsigned char var_17 = (unsigned char)250;
unsigned char var_18 = (unsigned char)177;
unsigned short var_19 = (unsigned short)53998;
signed char var_20 = (signed char)71;
unsigned char arr_1 [22] ;
short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28986 : (short)11004;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
