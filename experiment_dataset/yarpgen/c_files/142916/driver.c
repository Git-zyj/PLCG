#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1644685281;
int var_1 = -651269620;
unsigned long long int var_2 = 4732853644566105315ULL;
unsigned int var_3 = 2300658681U;
unsigned long long int var_4 = 17309717348798663978ULL;
unsigned short var_6 = (unsigned short)40630;
int zero = 0;
unsigned short var_11 = (unsigned short)31551;
unsigned short var_12 = (unsigned short)13686;
unsigned long long int var_13 = 18230986094720301094ULL;
unsigned short var_14 = (unsigned short)7790;
unsigned long long int arr_0 [15] ;
unsigned short arr_6 [15] ;
unsigned int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 12409456188831223033ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)62778;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2528156533U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
