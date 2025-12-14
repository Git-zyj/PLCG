#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)206;
signed char var_3 = (signed char)-42;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)75;
unsigned short var_7 = (unsigned short)19762;
unsigned short var_8 = (unsigned short)2925;
unsigned char var_9 = (unsigned char)70;
signed char var_10 = (signed char)-95;
short var_11 = (short)21211;
unsigned char var_12 = (unsigned char)210;
unsigned short var_13 = (unsigned short)31619;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)75;
signed char var_16 = (signed char)94;
signed char var_17 = (signed char)86;
signed char var_18 = (signed char)75;
int zero = 0;
signed char var_19 = (signed char)44;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19676;
signed char var_22 = (signed char)-28;
long long int var_23 = -4991102420348356358LL;
short var_24 = (short)24402;
unsigned short var_25 = (unsigned short)25147;
unsigned char arr_8 [23] [23] [23] [23] ;
unsigned char arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)245;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
