#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
short var_4 = (short)-13714;
signed char var_9 = (signed char)67;
short var_10 = (short)-12363;
int zero = 0;
short var_15 = (short)11253;
int var_16 = 548252261;
long long int var_17 = -5497004752301929053LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)6582;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
