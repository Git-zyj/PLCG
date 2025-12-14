#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -83998156;
unsigned int var_1 = 829287027U;
int var_2 = -329532655;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)85;
int var_6 = -1964560207;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2677086252U;
unsigned char var_9 = (unsigned char)145;
short var_10 = (short)10075;
int var_11 = 1938963053;
int zero = 0;
unsigned int var_12 = 2298263120U;
int var_13 = 1990070697;
short var_14 = (short)-18120;
_Bool arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20721 : (unsigned short)21525;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
