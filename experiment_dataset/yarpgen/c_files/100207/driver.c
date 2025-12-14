#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)123;
unsigned long long int var_6 = 11808260771344312270ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 526640751U;
unsigned char var_12 = (unsigned char)110;
signed char var_13 = (signed char)-84;
int zero = 0;
unsigned int var_14 = 3989247268U;
int var_15 = 1131359199;
signed char var_16 = (signed char)63;
unsigned char var_17 = (unsigned char)21;
unsigned short arr_0 [10] [10] ;
int arr_1 [10] [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7986;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -2073128400;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-7154;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
