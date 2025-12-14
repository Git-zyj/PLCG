#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6752;
unsigned short var_9 = (unsigned short)25130;
short var_13 = (short)11761;
unsigned short var_15 = (unsigned short)25943;
int zero = 0;
unsigned short var_20 = (unsigned short)38766;
unsigned int var_21 = 1561345587U;
unsigned short var_22 = (unsigned short)47256;
unsigned short var_23 = (unsigned short)30372;
short var_24 = (short)-6497;
unsigned int var_25 = 2246723030U;
unsigned int var_26 = 3722457522U;
short arr_2 [20] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-22648;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)43039;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
