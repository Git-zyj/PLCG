#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5879;
short var_8 = (short)-29178;
unsigned char var_9 = (unsigned char)232;
short var_10 = (short)-29241;
short var_11 = (short)-16091;
unsigned int var_12 = 3193240318U;
unsigned int var_13 = 2697874171U;
int zero = 0;
unsigned long long int var_14 = 11123580984168599858ULL;
unsigned int var_15 = 1088505373U;
unsigned int var_16 = 3272546489U;
unsigned int var_17 = 3211753477U;
short var_18 = (short)-22561;
unsigned char var_19 = (unsigned char)24;
short var_20 = (short)10837;
unsigned int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 557870873U;
}

void checksum() {
    hash(&seed, var_14);
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
