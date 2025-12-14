#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3737169033U;
unsigned int var_2 = 2596843526U;
signed char var_4 = (signed char)-77;
signed char var_5 = (signed char)(-127 - 1);
long long int var_6 = -3684731981373094263LL;
signed char var_7 = (signed char)59;
unsigned int var_8 = 1450060525U;
signed char var_9 = (signed char)28;
short var_10 = (short)-1927;
signed char var_11 = (signed char)-36;
long long int var_12 = 36927737974092783LL;
int zero = 0;
unsigned int var_13 = 2250505486U;
unsigned short var_14 = (unsigned short)40926;
unsigned long long int var_15 = 17860889760746974063ULL;
_Bool arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
