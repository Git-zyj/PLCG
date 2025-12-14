#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 152030423U;
short var_2 = (short)-28721;
unsigned int var_3 = 4187205167U;
short var_5 = (short)-18474;
unsigned char var_10 = (unsigned char)176;
unsigned char var_11 = (unsigned char)146;
unsigned int var_12 = 1910670296U;
unsigned int var_15 = 2738210463U;
int zero = 0;
unsigned char var_16 = (unsigned char)52;
unsigned char var_17 = (unsigned char)57;
unsigned char var_18 = (unsigned char)239;
short var_19 = (short)-15827;
unsigned int var_20 = 1142743017U;
short arr_0 [21] ;
unsigned int arr_1 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-30442;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2849471780U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)239;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
