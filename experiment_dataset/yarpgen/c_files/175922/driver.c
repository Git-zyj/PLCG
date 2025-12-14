#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)0;
short var_5 = (short)-18799;
unsigned short var_7 = (unsigned short)28215;
unsigned short var_9 = (unsigned short)23297;
int zero = 0;
signed char var_10 = (signed char)22;
unsigned char var_11 = (unsigned char)119;
short var_12 = (short)-22615;
unsigned char var_13 = (unsigned char)238;
unsigned short var_14 = (unsigned short)52403;
unsigned short arr_2 [12] ;
unsigned char arr_4 [12] ;
unsigned char arr_5 [12] ;
unsigned char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)3490;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)51;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
