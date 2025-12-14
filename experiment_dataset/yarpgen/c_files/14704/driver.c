#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43498;
unsigned short var_3 = (unsigned short)49550;
unsigned short var_5 = (unsigned short)63686;
unsigned short var_6 = (unsigned short)21041;
unsigned short var_7 = (unsigned short)12580;
unsigned short var_12 = (unsigned short)42102;
int zero = 0;
unsigned short var_14 = (unsigned short)6434;
unsigned short var_15 = (unsigned short)30326;
unsigned short var_16 = (unsigned short)44187;
unsigned short var_17 = (unsigned short)2107;
unsigned short var_18 = (unsigned short)2203;
unsigned short arr_0 [13] ;
unsigned short arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)37735;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)45915;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8851;
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
