#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2084372923U;
unsigned short var_1 = (unsigned short)19191;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_11 = -5438363310746429438LL;
unsigned long long int var_12 = 7059257491789141348ULL;
short var_16 = (short)22869;
signed char var_17 = (signed char)11;
int zero = 0;
unsigned short var_18 = (unsigned short)30772;
_Bool var_19 = (_Bool)1;
short var_20 = (short)28072;
signed char var_21 = (signed char)-63;
long long int var_22 = 3123550144778338259LL;
unsigned int arr_2 [25] ;
unsigned int arr_4 [25] [25] ;
unsigned int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3322339747U : 3310353381U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 891214515U : 1948755769U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 238104044U : 3140326996U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
