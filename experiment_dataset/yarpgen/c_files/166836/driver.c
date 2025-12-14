#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1995444495U;
unsigned short var_5 = (unsigned short)33232;
unsigned short var_6 = (unsigned short)8250;
unsigned short var_7 = (unsigned short)43857;
int var_9 = 720506223;
unsigned char var_11 = (unsigned char)209;
int zero = 0;
unsigned int var_12 = 3589797062U;
unsigned char var_13 = (unsigned char)5;
signed char var_14 = (signed char)74;
short var_15 = (short)-29640;
int var_16 = 1591400768;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)22918;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1396964391;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
