#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10263;
short var_5 = (short)-11546;
_Bool var_8 = (_Bool)0;
int var_9 = -2007021940;
int zero = 0;
unsigned char var_10 = (unsigned char)37;
short var_11 = (short)-9121;
unsigned int var_12 = 2663839386U;
unsigned int var_13 = 2343886293U;
unsigned int var_14 = 1684681247U;
unsigned int var_15 = 575889461U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-124;
_Bool arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
_Bool arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)22339;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
