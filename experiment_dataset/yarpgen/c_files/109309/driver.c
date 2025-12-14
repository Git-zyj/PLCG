#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned char var_1 = (unsigned char)210;
signed char var_7 = (signed char)-73;
signed char var_8 = (signed char)51;
short var_9 = (short)-9885;
signed char var_10 = (signed char)109;
int zero = 0;
short var_11 = (short)-4822;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = 210560560;
unsigned int var_16 = 3812722378U;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-18084;
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
