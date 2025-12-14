#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7577070189233689831ULL;
signed char var_1 = (signed char)-21;
long long int var_2 = -2988121507762945123LL;
int var_11 = 1760047258;
short var_13 = (short)2192;
unsigned char var_15 = (unsigned char)8;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8542615731058343417ULL;
unsigned int var_20 = 3054628783U;
unsigned int var_21 = 541151613U;
unsigned long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2102558905910519153ULL;
}

void checksum() {
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
