#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -845311706;
signed char var_4 = (signed char)71;
long long int var_5 = -4192673233064538686LL;
unsigned int var_7 = 2232799899U;
unsigned short var_9 = (unsigned short)12925;
long long int var_12 = 6500616706831430329LL;
int zero = 0;
long long int var_14 = -4763565040342912288LL;
unsigned short var_15 = (unsigned short)44547;
signed char var_16 = (signed char)25;
int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -1385612621;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
