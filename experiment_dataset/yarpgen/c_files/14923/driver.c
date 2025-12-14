#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 700702388;
int var_1 = -2078381183;
unsigned long long int var_3 = 3740179170548097605ULL;
unsigned char var_4 = (unsigned char)57;
unsigned char var_5 = (unsigned char)132;
signed char var_6 = (signed char)-33;
short var_8 = (short)-14573;
int var_9 = 1674815265;
long long int var_10 = 6292328329063081741LL;
int var_11 = 1561922496;
int zero = 0;
long long int var_12 = -8502814355026435625LL;
unsigned int var_13 = 2463439493U;
unsigned char var_14 = (unsigned char)79;
unsigned int var_15 = 667829620U;
unsigned short var_16 = (unsigned short)44986;
int var_17 = 1348065004;
unsigned char arr_2 [13] [13] [13] ;
_Bool arr_5 [13] [13] ;
int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 170752100 : 1481949210;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
