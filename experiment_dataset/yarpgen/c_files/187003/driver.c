#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3767970356U;
unsigned long long int var_2 = 8948282634228731354ULL;
unsigned long long int var_3 = 14047902990438364724ULL;
unsigned int var_4 = 3316297689U;
long long int var_5 = 3754670059941350380LL;
unsigned short var_7 = (unsigned short)1533;
unsigned short var_8 = (unsigned short)41017;
signed char var_10 = (signed char)-40;
long long int var_11 = -2967766012211012529LL;
int var_14 = -1530197929;
int zero = 0;
unsigned long long int var_15 = 1788840198690031541ULL;
unsigned int var_16 = 1726850252U;
short var_17 = (short)-15588;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-11501;
unsigned short var_20 = (unsigned short)41819;
signed char var_21 = (signed char)73;
unsigned long long int var_22 = 18325961746685592727ULL;
short arr_0 [24] [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11367;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)4330;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
