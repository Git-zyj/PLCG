#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1067909072;
long long int var_1 = -7214911976742579280LL;
unsigned int var_4 = 680558515U;
unsigned short var_5 = (unsigned short)43697;
unsigned short var_7 = (unsigned short)21272;
unsigned char var_14 = (unsigned char)235;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-86;
int zero = 0;
unsigned int var_20 = 290395234U;
int var_21 = -121509793;
signed char var_22 = (signed char)92;
int var_23 = -1255632889;
_Bool var_24 = (_Bool)0;
int var_25 = 1128986180;
short arr_3 [15] [15] ;
short arr_5 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15805;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)13372;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
