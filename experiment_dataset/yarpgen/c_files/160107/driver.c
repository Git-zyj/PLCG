#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1420071644U;
int var_2 = -2106151103;
unsigned int var_3 = 582752161U;
unsigned short var_5 = (unsigned short)14500;
int var_8 = -1490261815;
unsigned int var_13 = 2617201082U;
int var_15 = -1743596214;
int zero = 0;
unsigned int var_17 = 65960094U;
unsigned short var_18 = (unsigned short)3793;
unsigned int var_19 = 2220255942U;
int var_20 = -2062447802;
unsigned int var_21 = 3330994146U;
int var_22 = -1483379922;
unsigned int var_23 = 2700352949U;
unsigned int var_24 = 3668654073U;
unsigned int arr_0 [12] [12] ;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 3789728064U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 270525756;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
