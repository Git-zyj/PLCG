#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)249;
unsigned short var_7 = (unsigned short)12514;
unsigned short var_12 = (unsigned short)65217;
unsigned int var_14 = 2838129117U;
unsigned char var_17 = (unsigned char)231;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
long long int var_21 = 2189581396514289456LL;
unsigned int var_22 = 3824061472U;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-24624;
short arr_0 [11] ;
unsigned char arr_3 [11] [11] ;
unsigned short arr_5 [11] ;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)11270;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)46791;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3829467002U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
