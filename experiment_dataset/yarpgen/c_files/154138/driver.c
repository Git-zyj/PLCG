#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 149911449777780007LL;
unsigned int var_6 = 2799212250U;
long long int var_9 = -8685802611447603778LL;
int zero = 0;
unsigned short var_11 = (unsigned short)46918;
unsigned short var_12 = (unsigned short)27260;
_Bool var_13 = (_Bool)0;
short var_14 = (short)1944;
unsigned short var_15 = (unsigned short)27406;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33121 : (unsigned short)17278;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
