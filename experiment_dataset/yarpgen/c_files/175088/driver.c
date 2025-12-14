#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12124;
unsigned short var_1 = (unsigned short)22544;
signed char var_3 = (signed char)22;
unsigned char var_4 = (unsigned char)7;
unsigned int var_6 = 124845958U;
short var_8 = (short)-22624;
unsigned long long int var_9 = 6562487380317871232ULL;
short var_10 = (short)-31753;
signed char var_11 = (signed char)-101;
unsigned char var_12 = (unsigned char)253;
unsigned short var_13 = (unsigned short)3553;
long long int var_14 = 7167596700584652190LL;
short var_15 = (short)-25260;
unsigned short var_16 = (unsigned short)28985;
int zero = 0;
unsigned long long int var_17 = 6882539350419314363ULL;
int var_18 = -927188131;
signed char var_19 = (signed char)23;
short var_20 = (short)-9627;
signed char arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
short arr_6 [21] ;
long long int arr_10 [21] [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)55224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)23939;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -4775067361261066801LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 560226503;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
