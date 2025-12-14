#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45238;
unsigned int var_2 = 1818304086U;
unsigned short var_3 = (unsigned short)33744;
unsigned char var_4 = (unsigned char)83;
unsigned char var_6 = (unsigned char)20;
unsigned short var_7 = (unsigned short)16455;
unsigned char var_9 = (unsigned char)117;
unsigned short var_10 = (unsigned short)4856;
int zero = 0;
unsigned short var_12 = (unsigned short)59130;
unsigned char var_13 = (unsigned char)62;
unsigned int var_14 = 180606259U;
unsigned int var_15 = 34510633U;
unsigned short var_16 = (unsigned short)4525;
unsigned char arr_0 [16] ;
unsigned short arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
unsigned int arr_5 [16] ;
unsigned int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23775 : (unsigned short)21871;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3723111213U : 1367821266U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2382534800U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1463495890U : 3176914536U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
