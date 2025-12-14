#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45962;
unsigned short var_4 = (unsigned short)17079;
unsigned char var_8 = (unsigned char)117;
unsigned short var_10 = (unsigned short)19176;
unsigned int var_11 = 588067623U;
unsigned int var_12 = 769764590U;
signed char var_13 = (signed char)12;
unsigned long long int var_14 = 9133687997604713695ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
unsigned long long int var_18 = 5086124298436566923ULL;
unsigned int var_19 = 975751660U;
unsigned long long int var_20 = 14913787646884181873ULL;
unsigned short var_21 = (unsigned short)1340;
short var_22 = (short)18117;
unsigned char var_23 = (unsigned char)134;
unsigned long long int var_24 = 10338816918795330408ULL;
unsigned short var_25 = (unsigned short)46609;
short var_26 = (short)-16137;
unsigned short var_27 = (unsigned short)43665;
unsigned int var_28 = 1857814618U;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] [21] ;
signed char arr_5 [11] ;
unsigned short arr_7 [24] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3270154928U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)43744;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 14390973106860562873ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
