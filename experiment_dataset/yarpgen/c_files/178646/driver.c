#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4181518885U;
short var_3 = (short)11736;
short var_4 = (short)24339;
short var_11 = (short)-14334;
short var_16 = (short)-18733;
int zero = 0;
unsigned int var_17 = 445400827U;
unsigned char var_18 = (unsigned char)231;
unsigned int var_19 = 870473746U;
short var_20 = (short)-2094;
short var_21 = (short)-111;
unsigned int var_22 = 2065054298U;
unsigned char var_23 = (unsigned char)215;
unsigned int var_24 = 3480492207U;
unsigned int var_25 = 958932023U;
short arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
short arr_2 [23] ;
unsigned int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)9975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3738405811U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)30106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 488073151U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
