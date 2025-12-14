#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 56010199U;
int var_4 = -94374213;
_Bool var_10 = (_Bool)1;
int var_11 = -1745653496;
short var_12 = (short)11557;
long long int var_14 = 1558921909947374378LL;
int zero = 0;
int var_15 = -659975632;
signed char var_16 = (signed char)40;
long long int var_17 = -616077417502018413LL;
short arr_1 [13] ;
unsigned char arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)2951;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)115;
}

void checksum() {
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
