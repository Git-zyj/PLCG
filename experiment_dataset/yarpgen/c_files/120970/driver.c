#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2098587916;
unsigned char var_1 = (unsigned char)6;
unsigned short var_2 = (unsigned short)45582;
unsigned short var_4 = (unsigned short)5348;
unsigned long long int var_5 = 736081361532147919ULL;
short var_7 = (short)-18481;
short var_8 = (short)-17833;
unsigned short var_9 = (unsigned short)9550;
int var_12 = 1967646102;
int zero = 0;
unsigned char var_13 = (unsigned char)44;
unsigned short var_14 = (unsigned short)16191;
short var_15 = (short)30970;
int var_16 = -65877146;
int arr_4 [16] ;
unsigned short arr_5 [16] ;
unsigned int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1241876548;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)19976;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 995324775U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
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
