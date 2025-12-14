#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -920634152;
signed char var_6 = (signed char)80;
signed char var_7 = (signed char)115;
unsigned short var_10 = (unsigned short)48420;
int zero = 0;
long long int var_11 = -350908218773890407LL;
signed char var_12 = (signed char)49;
int var_13 = 1274022558;
signed char var_14 = (signed char)-81;
unsigned short var_15 = (unsigned short)2349;
signed char var_16 = (signed char)76;
unsigned int arr_3 [24] [24] ;
int arr_5 [24] [24] ;
unsigned char arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3925962124U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -1831399286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)85;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
