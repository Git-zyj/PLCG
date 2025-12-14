#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24631;
short var_1 = (short)12910;
long long int var_2 = 5945534945119180125LL;
short var_3 = (short)-5535;
short var_4 = (short)3848;
short var_7 = (short)-5513;
short var_9 = (short)1846;
short var_10 = (short)-12433;
short var_13 = (short)-5162;
int zero = 0;
long long int var_14 = 1655473672588786844LL;
short var_15 = (short)-12026;
long long int arr_0 [11] ;
short arr_5 [11] ;
long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 8901576980777446289LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)3185;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 8577355753359932105LL : -1053765424898360295LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
