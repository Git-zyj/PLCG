#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45410;
_Bool var_3 = (_Bool)1;
int var_4 = -1222755213;
unsigned short var_5 = (unsigned short)35017;
unsigned int var_6 = 1452754783U;
int var_7 = -1405630581;
unsigned long long int var_9 = 3235979584243959802ULL;
unsigned int var_11 = 2530637259U;
unsigned int var_13 = 4047462738U;
short var_14 = (short)17301;
unsigned char var_16 = (unsigned char)22;
unsigned long long int var_17 = 9228287011185308627ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)88;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)175;
unsigned int var_23 = 980502575U;
_Bool var_24 = (_Bool)1;
int var_25 = -305467558;
unsigned short var_26 = (unsigned short)44373;
int var_27 = -882471027;
_Bool arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
short arr_2 [12] [12] [12] ;
short arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)11032;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-7531;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
