#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 17962560362023430288ULL;
long long int var_15 = -5033995967000023615LL;
short var_16 = (short)-13765;
signed char var_18 = (signed char)-64;
int zero = 0;
signed char var_19 = (signed char)20;
short var_20 = (short)13195;
signed char var_21 = (signed char)-67;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-14558;
int var_25 = 712675471;
int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2063012060;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
