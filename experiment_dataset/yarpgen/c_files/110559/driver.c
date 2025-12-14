#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -857410575;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -2717691317904141805LL;
short var_13 = (short)-21016;
unsigned short var_14 = (unsigned short)31115;
short var_15 = (short)14394;
unsigned int var_16 = 862466515U;
short var_17 = (short)19095;
unsigned int var_18 = 3607980694U;
unsigned short var_19 = (unsigned short)50799;
int var_20 = -1139686862;
long long int var_21 = 8295398566493122474LL;
unsigned char arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned char arr_2 [15] ;
long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)40159;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -7774347606913560740LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
