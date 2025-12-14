#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12895;
short var_1 = (short)-25329;
unsigned int var_3 = 1154023719U;
int var_5 = -1605088807;
unsigned long long int var_6 = 10756191469814498566ULL;
unsigned int var_8 = 2980450793U;
int zero = 0;
unsigned int var_12 = 1286894000U;
unsigned int var_13 = 2255842111U;
signed char var_14 = (signed char)119;
signed char var_15 = (signed char)23;
signed char var_16 = (signed char)-80;
int var_17 = 1736422168;
int arr_0 [16] [16] ;
_Bool arr_1 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1179581553;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)105;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
