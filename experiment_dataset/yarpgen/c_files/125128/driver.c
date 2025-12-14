#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -857432728;
unsigned long long int var_3 = 16675229735456165340ULL;
short var_5 = (short)8901;
unsigned long long int var_10 = 9348358697182281691ULL;
unsigned char var_11 = (unsigned char)202;
int var_12 = -1519752619;
unsigned long long int var_13 = 6362957649917076930ULL;
int var_15 = -1974190092;
unsigned char var_17 = (unsigned char)70;
unsigned long long int var_18 = 15767015894566663898ULL;
int zero = 0;
short var_19 = (short)-21244;
short var_20 = (short)-583;
short var_21 = (short)-31989;
unsigned long long int var_22 = 1845254097134002098ULL;
short var_23 = (short)19313;
short arr_0 [11] [11] ;
int arr_4 [11] [11] ;
int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)5010;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -2043689711 : 1171331546;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1638503355 : -1348778893;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
