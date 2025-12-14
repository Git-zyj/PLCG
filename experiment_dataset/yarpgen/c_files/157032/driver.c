#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29340;
unsigned int var_2 = 1423200241U;
unsigned short var_5 = (unsigned short)11983;
unsigned short var_6 = (unsigned short)30342;
unsigned short var_13 = (unsigned short)15976;
int zero = 0;
unsigned short var_15 = (unsigned short)40696;
unsigned short var_16 = (unsigned short)59241;
int var_17 = 78262560;
unsigned short var_18 = (unsigned short)60165;
unsigned short var_19 = (unsigned short)32327;
unsigned short arr_0 [14] ;
int arr_1 [14] [14] ;
short arr_3 [14] [14] ;
unsigned short arr_7 [10] ;
unsigned char arr_4 [14] ;
unsigned short arr_9 [10] [10] ;
unsigned short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)30301;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -2071472845;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-25424;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)18708;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)53783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)10410;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
