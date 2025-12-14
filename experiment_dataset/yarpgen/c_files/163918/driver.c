#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)125;
unsigned char var_4 = (unsigned char)114;
unsigned int var_5 = 4249623718U;
unsigned long long int var_6 = 11993306181764004486ULL;
short var_7 = (short)-22435;
int var_8 = -529440735;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
unsigned char var_11 = (unsigned char)239;
int var_12 = -977612057;
signed char var_13 = (signed char)75;
int var_14 = -974178640;
signed char arr_0 [11] ;
unsigned short arr_1 [11] ;
short arr_2 [11] [11] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)36884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12898;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1738868111;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
