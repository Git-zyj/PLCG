#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3587633806U;
int var_1 = -158763234;
unsigned int var_2 = 3362782241U;
unsigned int var_3 = 2119624542U;
unsigned char var_4 = (unsigned char)43;
unsigned int var_5 = 340378189U;
unsigned int var_6 = 3941456205U;
unsigned short var_7 = (unsigned short)57995;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)110;
int var_12 = -2106842014;
unsigned long long int var_13 = 17487052444252688813ULL;
int zero = 0;
int var_14 = -1705831216;
signed char var_15 = (signed char)-74;
short var_16 = (short)16119;
signed char var_17 = (signed char)77;
unsigned char var_18 = (unsigned char)208;
unsigned char arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)31;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
