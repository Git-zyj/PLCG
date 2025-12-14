#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18263559859638592317ULL;
unsigned int var_1 = 714224520U;
unsigned char var_2 = (unsigned char)219;
signed char var_7 = (signed char)-80;
short var_8 = (short)20495;
int var_11 = -1974420586;
int zero = 0;
signed char var_12 = (signed char)60;
unsigned short var_13 = (unsigned short)1653;
unsigned char var_14 = (unsigned char)140;
unsigned int var_15 = 43449077U;
int var_16 = 1435364283;
short var_17 = (short)-6966;
unsigned int arr_0 [22] ;
int arr_1 [22] [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1424410639U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 268951392;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-31;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
