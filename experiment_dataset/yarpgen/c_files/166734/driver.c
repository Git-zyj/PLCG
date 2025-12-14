#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-30034;
unsigned char var_5 = (unsigned char)106;
unsigned char var_6 = (unsigned char)152;
short var_9 = (short)25881;
short var_10 = (short)26767;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
unsigned short var_13 = (unsigned short)29598;
short var_14 = (short)28168;
unsigned char var_15 = (unsigned char)176;
_Bool var_16 = (_Bool)0;
short var_17 = (short)2572;
unsigned char var_18 = (unsigned char)3;
unsigned char var_19 = (unsigned char)7;
signed char var_20 = (signed char)75;
unsigned char arr_0 [11] ;
int arr_1 [11] ;
unsigned short arr_2 [11] ;
short arr_3 [21] ;
unsigned char arr_4 [21] ;
short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1310982255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)38363;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)11593;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)12290;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
