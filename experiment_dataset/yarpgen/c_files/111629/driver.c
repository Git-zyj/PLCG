#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2236143047U;
unsigned int var_1 = 3388154188U;
unsigned int var_2 = 2885245555U;
unsigned int var_3 = 513924928U;
unsigned int var_4 = 134531868U;
unsigned int var_5 = 662123362U;
unsigned int var_6 = 4294277678U;
unsigned int var_7 = 1528552589U;
unsigned int var_8 = 1933369713U;
unsigned int var_10 = 2424322175U;
unsigned int var_11 = 3078397666U;
unsigned int var_12 = 3712594113U;
int zero = 0;
unsigned int var_13 = 744223834U;
unsigned int var_14 = 4110505533U;
unsigned int var_15 = 2905840341U;
unsigned int var_16 = 950173841U;
unsigned int var_17 = 2504747108U;
unsigned int var_18 = 3404757584U;
unsigned int var_19 = 3756089348U;
unsigned int arr_0 [15] [15] ;
unsigned int arr_4 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1306139678U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 177534009U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
