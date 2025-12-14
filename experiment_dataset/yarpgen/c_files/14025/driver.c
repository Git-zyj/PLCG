#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3874190524425360532ULL;
signed char var_1 = (signed char)-98;
short var_2 = (short)-14858;
unsigned int var_6 = 1688343185U;
unsigned long long int var_7 = 11929737441590256175ULL;
unsigned int var_9 = 1621386341U;
signed char var_11 = (signed char)36;
int zero = 0;
unsigned short var_12 = (unsigned short)16359;
unsigned short var_13 = (unsigned short)57239;
long long int var_14 = -2135861306704471067LL;
unsigned short var_15 = (unsigned short)38840;
long long int var_16 = -1318182427645176775LL;
unsigned short var_17 = (unsigned short)6934;
long long int arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -2408895995874151650LL : 150687516229289003LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3505270018U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10652164289671522583ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3028272902U : 2290181810U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
