#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
unsigned int var_3 = 1472279673U;
unsigned char var_5 = (unsigned char)200;
_Bool var_8 = (_Bool)1;
int var_9 = -636147582;
_Bool var_15 = (_Bool)1;
unsigned char var_18 = (unsigned char)213;
int zero = 0;
unsigned short var_19 = (unsigned short)58954;
int var_20 = -315204720;
_Bool var_21 = (_Bool)0;
int var_22 = 619955088;
unsigned char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)52751;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)12837 : (short)11164;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
