#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10534;
short var_2 = (short)-7811;
short var_5 = (short)2657;
unsigned long long int var_7 = 10129750954148312853ULL;
short var_8 = (short)1942;
short var_11 = (short)-30288;
short var_12 = (short)17274;
unsigned long long int var_13 = 11265203247708564482ULL;
int zero = 0;
short var_18 = (short)11585;
short var_19 = (short)-29219;
unsigned long long int var_20 = 1312197819032973118ULL;
short var_21 = (short)-1144;
long long int var_22 = -6735783992097351997LL;
short var_23 = (short)-29205;
long long int var_24 = 5858721511047453607LL;
unsigned long long int var_25 = 16931783600345365063ULL;
short arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
unsigned long long int arr_3 [12] [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)12674;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10171435912259653718ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 12555668938731228765ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-24660;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
