#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-13201;
_Bool var_8 = (_Bool)1;
int var_10 = 728195686;
unsigned char var_13 = (unsigned char)47;
long long int var_15 = -381584686139587126LL;
int zero = 0;
signed char var_16 = (signed char)95;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-11652;
int var_19 = 974710830;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
