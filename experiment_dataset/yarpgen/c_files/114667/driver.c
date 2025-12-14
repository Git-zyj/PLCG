#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13547;
unsigned short var_1 = (unsigned short)10063;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)6267;
unsigned char var_7 = (unsigned char)232;
unsigned char var_10 = (unsigned char)86;
unsigned char var_11 = (unsigned char)127;
unsigned short var_15 = (unsigned short)17825;
unsigned int var_16 = 3669650481U;
int zero = 0;
unsigned short var_19 = (unsigned short)8610;
_Bool var_20 = (_Bool)0;
short var_21 = (short)16576;
unsigned char var_22 = (unsigned char)65;
unsigned int var_23 = 3324463042U;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)48702;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-26155;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
