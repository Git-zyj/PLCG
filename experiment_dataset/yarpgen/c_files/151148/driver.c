#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2726923175U;
unsigned int var_1 = 1598983112U;
unsigned int var_2 = 691563478U;
short var_3 = (short)-29044;
signed char var_7 = (signed char)33;
short var_9 = (short)28634;
signed char var_10 = (signed char)88;
int zero = 0;
long long int var_11 = -7258316062482319089LL;
unsigned int var_12 = 2361540301U;
unsigned short var_13 = (unsigned short)37603;
unsigned int var_14 = 4173960599U;
short var_15 = (short)-30213;
unsigned char var_16 = (unsigned char)82;
short arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-30396;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
