#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24241;
unsigned int var_2 = 624052974U;
unsigned char var_3 = (unsigned char)189;
short var_5 = (short)-28378;
unsigned short var_6 = (unsigned short)15949;
unsigned short var_7 = (unsigned short)10071;
long long int var_8 = -1275688743272904361LL;
unsigned short var_9 = (unsigned short)61288;
unsigned int var_10 = 1063057503U;
unsigned char var_12 = (unsigned char)42;
long long int var_13 = -6194224886264207109LL;
int zero = 0;
unsigned int var_14 = 344381328U;
short var_15 = (short)14394;
short var_16 = (short)-23760;
signed char var_17 = (signed char)83;
unsigned short var_18 = (unsigned short)12304;
short arr_0 [12] ;
unsigned int arr_1 [12] ;
short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-13765;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4188119426U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-25361 : (short)-29688;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
