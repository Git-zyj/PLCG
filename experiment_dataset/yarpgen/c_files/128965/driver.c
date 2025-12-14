#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4187640866U;
unsigned int var_3 = 2304730662U;
unsigned short var_4 = (unsigned short)2251;
unsigned short var_5 = (unsigned short)56611;
short var_6 = (short)-11782;
unsigned short var_8 = (unsigned short)52032;
int zero = 0;
int var_11 = 514976456;
int var_12 = -825334888;
unsigned int var_13 = 3772526404U;
signed char var_14 = (signed char)-104;
int var_15 = -836100492;
_Bool var_16 = (_Bool)1;
unsigned short arr_4 [13] ;
unsigned int arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)51809;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2271514987U;
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
