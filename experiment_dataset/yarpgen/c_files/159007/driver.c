#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1604470073;
unsigned char var_1 = (unsigned char)3;
unsigned char var_2 = (unsigned char)209;
short var_4 = (short)30981;
unsigned long long int var_5 = 11200809378312544483ULL;
long long int var_7 = -2945507798873236614LL;
unsigned short var_8 = (unsigned short)17994;
int var_9 = -937368925;
short var_11 = (short)-24813;
int zero = 0;
int var_12 = -1519459463;
unsigned int var_13 = 992725266U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)91;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)37592;
unsigned short arr_0 [11] ;
long long int arr_1 [11] [11] ;
short arr_2 [11] [11] [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)16143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4083051195653207999LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-4772;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
