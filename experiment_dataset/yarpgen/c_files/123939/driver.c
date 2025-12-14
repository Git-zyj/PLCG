#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31994;
short var_8 = (short)9129;
signed char var_10 = (signed char)85;
short var_11 = (short)-8597;
int zero = 0;
unsigned int var_15 = 1973330991U;
unsigned short var_16 = (unsigned short)56757;
unsigned long long int var_17 = 17281101983521697503ULL;
short var_18 = (short)-20354;
unsigned int var_19 = 3271620059U;
signed char var_20 = (signed char)-45;
signed char arr_2 [20] [20] ;
short arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)23013;
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
