#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15762865789457541795ULL;
signed char var_5 = (signed char)-61;
unsigned short var_11 = (unsigned short)3710;
unsigned char var_12 = (unsigned char)118;
unsigned long long int var_13 = 9575935115919575550ULL;
long long int var_15 = 2154910687037776409LL;
unsigned short var_16 = (unsigned short)64828;
unsigned long long int var_18 = 3774873902028661399ULL;
short var_19 = (short)-12248;
int zero = 0;
long long int var_20 = -9173371005399599251LL;
unsigned long long int var_21 = 8957457403352942840ULL;
signed char var_22 = (signed char)-52;
unsigned char var_23 = (unsigned char)247;
short var_24 = (short)2550;
int arr_0 [15] [15] ;
int arr_1 [15] [15] ;
unsigned short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -954045972;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1987171354 : 1529779147;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47357 : (unsigned short)30339;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
