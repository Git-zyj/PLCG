#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42540;
unsigned short var_3 = (unsigned short)8158;
unsigned char var_6 = (unsigned char)131;
unsigned short var_8 = (unsigned short)59630;
unsigned short var_9 = (unsigned short)57992;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
short var_14 = (short)-13936;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-1;
unsigned short var_17 = (unsigned short)46667;
unsigned char arr_2 [23] [23] ;
unsigned char arr_3 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)10604;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
