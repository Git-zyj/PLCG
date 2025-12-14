#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 9084754067190354902ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_9 = 8231743965009306497LL;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)55307;
long long int var_14 = 8689711413584388961LL;
unsigned int var_15 = 4139552006U;
long long int var_16 = -3265624293787283284LL;
unsigned int var_17 = 2215574873U;
unsigned long long int var_18 = 14788134908599264750ULL;
int arr_0 [24] ;
unsigned long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1054503534;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 15783647006079728387ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
