#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)236;
unsigned long long int var_4 = 2566934050841740575ULL;
int var_7 = 97425453;
unsigned int var_8 = 500982541U;
unsigned int var_9 = 1574353478U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 846595962658726040ULL;
short var_20 = (short)30783;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-11691;
unsigned long long int var_23 = 6517489233055992016ULL;
int var_24 = 470088954;
unsigned short var_25 = (unsigned short)49804;
unsigned int arr_2 [11] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2140093287U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1951900351;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
