#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)36;
unsigned char var_4 = (unsigned char)11;
long long int var_6 = -4306191684741503094LL;
unsigned long long int var_7 = 1277052854853454025ULL;
unsigned int var_8 = 737903618U;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
signed char var_12 = (signed char)69;
short var_13 = (short)-10855;
unsigned short var_14 = (unsigned short)23508;
short var_15 = (short)-21904;
unsigned short var_16 = (unsigned short)21061;
short var_17 = (short)-3130;
short var_18 = (short)-18404;
unsigned char var_19 = (unsigned char)166;
signed char var_20 = (signed char)-83;
short var_21 = (short)-27183;
short var_22 = (short)14887;
signed char var_23 = (signed char)-51;
unsigned long long int arr_4 [14] ;
short arr_5 [14] [14] ;
unsigned int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 4453956259847480185ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)16648;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 3059136271U;
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
