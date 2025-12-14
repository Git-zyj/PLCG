#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1140454685;
int var_3 = 1374623667;
int var_4 = -330797200;
signed char var_5 = (signed char)-121;
int var_6 = 1395073711;
unsigned short var_8 = (unsigned short)18586;
unsigned short var_11 = (unsigned short)1928;
unsigned short var_12 = (unsigned short)23700;
int zero = 0;
int var_13 = -626684179;
int var_14 = -614136507;
signed char var_15 = (signed char)-38;
unsigned long long int var_16 = 10059352308654060868ULL;
int var_17 = 1055927039;
unsigned short var_18 = (unsigned short)32082;
int arr_0 [12] [12] ;
int arr_1 [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 221350354;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 936460440;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 14625814498346724981ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
