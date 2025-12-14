#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5612960124912751158LL;
unsigned short var_1 = (unsigned short)6804;
long long int var_4 = -2369192928269877237LL;
unsigned short var_5 = (unsigned short)20115;
short var_10 = (short)-30481;
unsigned short var_11 = (unsigned short)32933;
int zero = 0;
unsigned short var_13 = (unsigned short)4962;
int var_14 = -1948126831;
unsigned int var_15 = 3989887284U;
unsigned short var_16 = (unsigned short)34336;
long long int var_17 = 3446931126918102800LL;
unsigned long long int var_18 = 12755025572867342693ULL;
unsigned char arr_1 [19] [19] ;
unsigned short arr_2 [19] [19] ;
unsigned short arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)31115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)12234;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
