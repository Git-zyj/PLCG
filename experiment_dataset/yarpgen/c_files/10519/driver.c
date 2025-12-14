#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8929;
unsigned short var_1 = (unsigned short)9073;
unsigned short var_4 = (unsigned short)60167;
unsigned short var_8 = (unsigned short)7817;
unsigned short var_9 = (unsigned short)30137;
unsigned short var_11 = (unsigned short)28793;
int zero = 0;
unsigned short var_12 = (unsigned short)53887;
unsigned short var_13 = (unsigned short)16111;
unsigned short var_14 = (unsigned short)21074;
unsigned short var_15 = (unsigned short)56401;
unsigned short var_16 = (unsigned short)47765;
unsigned short var_17 = (unsigned short)58308;
unsigned short arr_4 [17] ;
unsigned short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)63642;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)25828;
}

void checksum() {
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
