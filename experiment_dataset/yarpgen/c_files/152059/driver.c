#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59192;
unsigned long long int var_2 = 5340513946822185213ULL;
unsigned short var_3 = (unsigned short)5147;
unsigned int var_5 = 2937302978U;
unsigned short var_10 = (unsigned short)5106;
int zero = 0;
signed char var_14 = (signed char)-89;
unsigned short var_15 = (unsigned short)17741;
unsigned short var_16 = (unsigned short)16130;
unsigned short var_17 = (unsigned short)12881;
unsigned char var_18 = (unsigned char)42;
unsigned char arr_0 [23] ;
unsigned int arr_1 [23] ;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 2165923570U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-93 : (signed char)-16;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
