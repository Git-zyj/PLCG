#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10782;
unsigned short var_3 = (unsigned short)51612;
unsigned short var_9 = (unsigned short)55053;
unsigned int var_11 = 1875149067U;
unsigned char var_13 = (unsigned char)12;
int zero = 0;
signed char var_14 = (signed char)33;
int var_15 = 1409233859;
int var_16 = 1116043902;
signed char var_17 = (signed char)-12;
unsigned long long int var_18 = 10760669978220744278ULL;
long long int var_19 = 388632949874497963LL;
int var_20 = -523172702;
unsigned char var_21 = (unsigned char)59;
unsigned char arr_0 [25] [25] ;
long long int arr_1 [25] ;
short arr_3 [25] [25] [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1865746846292654589LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)7690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 48685545122747218LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
