#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58857;
int var_4 = -985566511;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 572274304U;
unsigned int var_14 = 700772046U;
int zero = 0;
unsigned int var_18 = 3582448599U;
int var_19 = -2072066818;
unsigned short var_20 = (unsigned short)30;
unsigned int arr_0 [12] ;
short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3482910239U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-22912;
}

void checksum() {
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
