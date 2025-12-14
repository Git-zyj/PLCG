#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
unsigned int var_4 = 2840034629U;
unsigned int var_10 = 859160294U;
signed char var_11 = (signed char)49;
int var_14 = 44538653;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)26371;
signed char var_18 = (signed char)-12;
int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -347665478;
}

void checksum() {
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
