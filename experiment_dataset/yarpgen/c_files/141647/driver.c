#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15736;
unsigned int var_2 = 630652786U;
unsigned int var_5 = 1791056662U;
unsigned int var_8 = 16964415U;
unsigned int var_10 = 1849206720U;
short var_11 = (short)-28480;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
short var_15 = (short)27403;
short var_16 = (short)8873;
unsigned int var_17 = 390952184U;
short var_18 = (short)-30293;
short arr_0 [21] ;
unsigned int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)4713;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3058721635U : 3181359700U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
