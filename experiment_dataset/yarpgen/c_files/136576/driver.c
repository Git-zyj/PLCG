#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2530;
int var_4 = 791381160;
unsigned char var_5 = (unsigned char)134;
unsigned char var_6 = (unsigned char)94;
unsigned short var_7 = (unsigned short)62447;
unsigned int var_8 = 3287046984U;
short var_10 = (short)24573;
int zero = 0;
signed char var_13 = (signed char)50;
unsigned short var_14 = (unsigned short)60071;
int var_15 = 909316276;
unsigned long long int arr_2 [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1878289511542895941ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16871125909440086594ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
