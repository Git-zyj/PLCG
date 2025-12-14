#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned char var_1 = (unsigned char)113;
unsigned char var_5 = (unsigned char)48;
unsigned long long int var_7 = 17307569351184538506ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
short var_13 = (short)28116;
unsigned long long int var_14 = 9885219169487467657ULL;
unsigned char var_15 = (unsigned char)67;
unsigned long long int var_16 = 11682165480287231486ULL;
unsigned long long int var_17 = 13816619603474696948ULL;
short var_18 = (short)25726;
unsigned char var_19 = (unsigned char)240;
unsigned long long int arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2241755058632584947ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19326;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
