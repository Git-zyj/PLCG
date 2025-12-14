#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62537;
unsigned long long int var_1 = 11235439798981534394ULL;
int var_2 = 1965350858;
int var_3 = 1477276176;
_Bool var_4 = (_Bool)1;
int var_5 = 381395387;
int var_6 = -1861313696;
unsigned long long int var_7 = 7296711516906693063ULL;
short var_8 = (short)-285;
unsigned long long int var_9 = 5365027937102120396ULL;
int var_10 = -33176466;
int var_11 = 415231552;
unsigned int var_12 = 1562712466U;
int zero = 0;
int var_13 = 1635221548;
short var_14 = (short)30280;
_Bool var_15 = (_Bool)1;
int var_16 = -2049140991;
int var_17 = -1444879392;
short arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-26448;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
