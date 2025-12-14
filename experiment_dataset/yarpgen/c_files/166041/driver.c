#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1175275991U;
unsigned int var_2 = 2023218487U;
unsigned long long int var_7 = 13815321557166649867ULL;
short var_11 = (short)11138;
signed char var_14 = (signed char)-80;
long long int var_17 = 897045905134040858LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-91;
int var_22 = 229475551;
signed char var_23 = (signed char)113;
long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -4449934238312404049LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
