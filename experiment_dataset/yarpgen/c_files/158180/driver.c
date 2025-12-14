#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55686;
unsigned int var_1 = 883804341U;
unsigned short var_2 = (unsigned short)7145;
unsigned short var_3 = (unsigned short)382;
unsigned char var_4 = (unsigned char)135;
short var_5 = (short)17466;
unsigned long long int var_6 = 8597213457154128173ULL;
unsigned int var_7 = 3640352536U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)17684;
short var_10 = (short)-7393;
int zero = 0;
unsigned short var_11 = (unsigned short)9968;
int var_12 = 1454792107;
unsigned long long int var_13 = 17352077318133303979ULL;
_Bool var_14 = (_Bool)0;
unsigned char arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)66 : (unsigned char)113;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
