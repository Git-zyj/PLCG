#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -657593963;
int var_1 = 1206478095;
int var_6 = -84892066;
int var_7 = -2011016173;
int var_11 = -452729286;
int zero = 0;
int var_13 = -823945265;
int var_14 = -353351391;
int var_15 = 1616139244;
int var_16 = -1413086405;
int var_17 = -727707142;
int var_18 = 648145299;
int var_19 = 1477925445;
int var_20 = 824465690;
int arr_0 [12] [12] ;
int arr_4 [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 411533039;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1890830557;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1925261564;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
