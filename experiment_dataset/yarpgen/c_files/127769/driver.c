#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
signed char var_3 = (signed char)117;
unsigned char var_4 = (unsigned char)29;
int var_5 = -574074250;
int var_6 = -1429092654;
int var_7 = -1342702363;
unsigned short var_8 = (unsigned short)57633;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
unsigned short var_11 = (unsigned short)6770;
unsigned char var_12 = (unsigned char)111;
int var_13 = -1104428548;
signed char var_14 = (signed char)74;
unsigned short var_15 = (unsigned short)34075;
unsigned char arr_0 [24] ;
short arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)3487 : (short)-18108;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42429;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57929 : (unsigned short)34751;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
