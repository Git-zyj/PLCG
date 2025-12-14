#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25552;
short var_1 = (short)1281;
unsigned short var_2 = (unsigned short)4154;
short var_4 = (short)-6641;
unsigned short var_5 = (unsigned short)19499;
unsigned int var_6 = 3126779306U;
short var_7 = (short)-30535;
int zero = 0;
unsigned int var_10 = 2089168168U;
short var_11 = (short)19640;
unsigned short var_12 = (unsigned short)33584;
short var_13 = (short)-15118;
short var_14 = (short)9615;
short var_15 = (short)-22478;
short var_16 = (short)29507;
short var_17 = (short)-25351;
unsigned short arr_0 [24] [24] ;
short arr_1 [24] [24] ;
short arr_3 [24] [24] ;
short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61956;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25966;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)30057;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4616;
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
