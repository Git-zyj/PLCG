#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 350288329U;
unsigned short var_1 = (unsigned short)48138;
int var_4 = -587517920;
int var_5 = 920439906;
int var_6 = 1401472762;
signed char var_8 = (signed char)112;
int zero = 0;
short var_10 = (short)11833;
int var_11 = 560049887;
unsigned long long int var_12 = 4271967164459068730ULL;
unsigned int var_13 = 3977893778U;
unsigned short var_14 = (unsigned short)34123;
unsigned char var_15 = (unsigned char)186;
int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
signed char arr_2 [10] ;
unsigned long long int arr_3 [10] ;
int arr_4 [10] [10] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -413251863;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)40882;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 7243462034471472627ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1208543990;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1257038586 : -1662970928;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
