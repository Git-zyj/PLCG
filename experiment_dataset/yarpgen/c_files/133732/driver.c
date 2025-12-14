#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10000;
short var_2 = (short)-198;
short var_3 = (short)9884;
short var_4 = (short)-22203;
short var_5 = (short)-3600;
short var_6 = (short)11536;
short var_7 = (short)-32552;
short var_8 = (short)23672;
short var_9 = (short)-20950;
int zero = 0;
short var_11 = (short)10825;
short var_12 = (short)18971;
short var_13 = (short)-7844;
short var_14 = (short)-4207;
short var_15 = (short)19504;
short var_16 = (short)-22184;
short var_17 = (short)31090;
short var_18 = (short)11909;
short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-7200;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
