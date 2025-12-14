#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3943221629U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2689332621U;
int var_8 = 390148764;
unsigned short var_9 = (unsigned short)49081;
unsigned char var_13 = (unsigned char)18;
unsigned short var_16 = (unsigned short)29417;
int zero = 0;
unsigned short var_17 = (unsigned short)48053;
unsigned char var_18 = (unsigned char)212;
signed char var_19 = (signed char)-61;
unsigned int var_20 = 3994092551U;
unsigned long long int var_21 = 15905297635028385850ULL;
short var_22 = (short)6004;
unsigned short arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)51164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -8041190778133387598LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
