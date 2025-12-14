#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_12 = (short)-10212;
unsigned long long int var_16 = 18067005223486918308ULL;
signed char var_18 = (signed char)84;
int zero = 0;
short var_19 = (short)12816;
unsigned long long int var_20 = 5493923418633389107ULL;
unsigned char var_21 = (unsigned char)205;
unsigned long long int var_22 = 6894874094997974254ULL;
unsigned char var_23 = (unsigned char)113;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)198;
signed char arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-15;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
