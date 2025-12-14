#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1896827440;
int var_5 = -1136278240;
int var_6 = -1148249462;
unsigned short var_10 = (unsigned short)63137;
long long int var_15 = -3121409173819750377LL;
long long int var_16 = 4645956399089955887LL;
int zero = 0;
long long int var_17 = 8011610410217246504LL;
unsigned int var_18 = 3472750727U;
unsigned short var_19 = (unsigned short)13523;
signed char var_20 = (signed char)73;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)130;
unsigned short var_23 = (unsigned short)54739;
unsigned int arr_2 [11] [11] [11] ;
short arr_3 [11] [11] [11] ;
int arr_4 [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] ;
short arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1994703422U : 916585938U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-31713;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -40603842;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3509742422185660423ULL : 16327098064501547664ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (short)11672;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
