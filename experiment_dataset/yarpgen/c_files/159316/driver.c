#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 5498390091618391617LL;
signed char var_5 = (signed char)31;
unsigned long long int var_7 = 1576095079070255117ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4152949394587062123ULL;
unsigned short var_12 = (unsigned short)31251;
int zero = 0;
unsigned char var_13 = (unsigned char)15;
unsigned long long int var_14 = 2347255071861926153ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-3271;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
