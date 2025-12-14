#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned long long int var_1 = 9217310712551326235ULL;
int var_3 = -769932436;
unsigned char var_5 = (unsigned char)213;
long long int var_6 = 4003763669350415905LL;
unsigned int var_8 = 1281754001U;
unsigned long long int var_9 = 14265737868464976241ULL;
short var_14 = (short)-10061;
unsigned char var_15 = (unsigned char)19;
int zero = 0;
long long int var_16 = 1223385371344128209LL;
short var_17 = (short)-19237;
signed char var_18 = (signed char)59;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7073573230092547523ULL;
_Bool arr_0 [19] [19] ;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)72;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
