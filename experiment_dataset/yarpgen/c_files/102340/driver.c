#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6459783742372593941LL;
unsigned short var_1 = (unsigned short)33897;
unsigned int var_7 = 1332954186U;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)61237;
int zero = 0;
unsigned long long int var_20 = 6151346888979980769ULL;
unsigned long long int var_21 = 11104954835487803460ULL;
unsigned long long int var_22 = 15258918124635577011ULL;
unsigned int var_23 = 2012577743U;
unsigned short var_24 = (unsigned short)50766;
unsigned long long int arr_2 [11] [11] ;
unsigned char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 4298557842284201483ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
