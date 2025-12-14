#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned short var_4 = (unsigned short)64761;
signed char var_5 = (signed char)-2;
short var_6 = (short)11811;
short var_7 = (short)-22098;
unsigned short var_12 = (unsigned short)1606;
long long int var_13 = -1354838638274483485LL;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
short var_20 = (short)-6422;
unsigned char var_21 = (unsigned char)65;
long long int var_22 = -1470643180688015963LL;
signed char var_23 = (signed char)-124;
unsigned short var_24 = (unsigned short)33638;
signed char arr_2 [12] ;
unsigned char arr_5 [13] ;
short arr_6 [13] [13] ;
unsigned char arr_7 [13] ;
unsigned short arr_10 [13] ;
unsigned short arr_3 [12] ;
unsigned char arr_4 [12] [12] ;
unsigned short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)29881;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)5747;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31002 : (unsigned short)24157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned short)52966;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
