#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17743400798437291086ULL;
signed char var_1 = (signed char)-111;
unsigned char var_2 = (unsigned char)6;
unsigned short var_5 = (unsigned short)8598;
unsigned long long int var_7 = 6800668599706851070ULL;
unsigned long long int var_8 = 14410695380221217986ULL;
short var_11 = (short)-16503;
int var_13 = 2096118312;
unsigned long long int var_14 = 1533305093357514472ULL;
short var_15 = (short)1630;
int zero = 0;
unsigned int var_16 = 3406960333U;
unsigned int var_17 = 2546859045U;
signed char var_18 = (signed char)-78;
signed char var_19 = (signed char)124;
signed char var_20 = (signed char)58;
_Bool var_21 = (_Bool)0;
unsigned short arr_2 [16] [16] ;
unsigned int arr_4 [16] [16] ;
signed char arr_6 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)19128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 3413929902U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)9 : (signed char)-99;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
