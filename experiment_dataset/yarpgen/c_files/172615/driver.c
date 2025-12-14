#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -26564179;
signed char var_4 = (signed char)-62;
int var_7 = -1017882270;
short var_12 = (short)-17155;
unsigned int var_14 = 4000863323U;
int zero = 0;
signed char var_15 = (signed char)-84;
int var_16 = 1406074479;
int var_17 = 19520321;
signed char var_18 = (signed char)-79;
unsigned short var_19 = (unsigned short)34539;
signed char var_20 = (signed char)28;
_Bool arr_0 [16] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)14008;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
