#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1411495105;
int var_3 = -1139082573;
int var_4 = -1936707220;
int var_5 = -1907521159;
int var_7 = -808591580;
int var_8 = -1690082785;
int var_11 = 718587320;
int var_12 = -176112416;
int var_13 = 927539688;
int var_15 = 2119933752;
int var_16 = 496111121;
int var_17 = 140107154;
int zero = 0;
int var_19 = 1092915931;
int var_20 = 1846687657;
int var_21 = -724914959;
int arr_0 [18] ;
int arr_1 [18] ;
int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1736879901;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 866383306;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 963283067;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
