#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12901;
unsigned short var_3 = (unsigned short)61234;
unsigned char var_4 = (unsigned char)224;
unsigned char var_6 = (unsigned char)131;
short var_9 = (short)17958;
signed char var_10 = (signed char)-94;
unsigned int var_12 = 346933045U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)15590;
short var_17 = (short)-31387;
signed char var_18 = (signed char)-2;
int arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] [24] [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1874459004;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1412957093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)25526;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
