#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1197;
unsigned short var_1 = (unsigned short)53999;
long long int var_2 = 7024159626108350476LL;
unsigned int var_3 = 99634034U;
unsigned long long int var_4 = 7974392574377937559ULL;
unsigned long long int var_7 = 16405720618820552471ULL;
long long int var_8 = -2186012586122012223LL;
unsigned int var_9 = 526328373U;
long long int var_11 = -4709223621055744615LL;
unsigned short var_12 = (unsigned short)30437;
unsigned short var_13 = (unsigned short)22007;
short var_16 = (short)-8702;
long long int var_17 = -7569393882760749230LL;
unsigned short var_18 = (unsigned short)25347;
int zero = 0;
long long int var_19 = 6108109191686717806LL;
unsigned short var_20 = (unsigned short)30188;
unsigned short var_21 = (unsigned short)22742;
long long int var_22 = -6210401335199174538LL;
unsigned short var_23 = (unsigned short)23344;
short var_24 = (short)19426;
unsigned int var_25 = 1681145334U;
short var_26 = (short)4285;
short var_27 = (short)-26036;
short arr_0 [24] [24] ;
short arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
short arr_5 [24] ;
unsigned long long int arr_13 [24] ;
unsigned int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-2117 : (short)-15792;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26451 : (short)-30148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 5264320724912234409ULL : 6579234835804757309ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)30040 : (short)18019;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 11587707223737388416ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 2747786967U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
