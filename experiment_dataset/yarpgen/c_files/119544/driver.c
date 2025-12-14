#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -956379809;
unsigned int var_2 = 2403564899U;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)16668;
int var_9 = -924908577;
_Bool var_10 = (_Bool)1;
unsigned int var_16 = 846060291U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = 2084257954;
unsigned int var_21 = 2279497945U;
unsigned int var_22 = 1454699037U;
unsigned int var_23 = 3401183182U;
_Bool var_24 = (_Bool)1;
int var_25 = 1606117798;
int arr_0 [13] [13] ;
unsigned short arr_3 [13] ;
unsigned int arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -714967022;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)45933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 41572857U;
}

void checksum() {
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
