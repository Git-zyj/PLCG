#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2636041796U;
signed char var_3 = (signed char)-14;
int var_6 = 73867740;
unsigned int var_7 = 894704581U;
unsigned int var_9 = 632762629U;
signed char var_10 = (signed char)91;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3059170456U;
int zero = 0;
unsigned int var_15 = 3407474945U;
signed char var_16 = (signed char)-75;
short var_17 = (short)16339;
_Bool var_18 = (_Bool)0;
short var_19 = (short)29256;
unsigned int var_20 = 821880302U;
short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-14257;
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
