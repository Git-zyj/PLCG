#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 528583100;
signed char var_2 = (signed char)-30;
int var_6 = 2009784379;
long long int var_7 = 4282809692475987006LL;
unsigned long long int var_9 = 2773237185742285316ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 872265435U;
short var_15 = (short)25445;
short var_16 = (short)7672;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)48198;
unsigned int var_19 = 1329249286U;
unsigned int var_20 = 2474462119U;
unsigned long long int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 8755084229724570006ULL : 2465175142047906041ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
