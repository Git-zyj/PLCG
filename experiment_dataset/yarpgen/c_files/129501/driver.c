#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
int var_1 = 2008550331;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2264845261U;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-96;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -2106569108;
unsigned short var_15 = (unsigned short)58548;
int var_16 = 257810563;
int var_17 = -554349728;
short var_18 = (short)7960;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1466003939U;
}

void checksum() {
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
