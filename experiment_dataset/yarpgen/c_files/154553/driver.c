#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9321987517048891019ULL;
int var_3 = 2102728415;
int var_4 = -1112921161;
int var_5 = -1737126113;
unsigned int var_6 = 1715466492U;
unsigned int var_7 = 195587484U;
unsigned short var_8 = (unsigned short)15461;
unsigned long long int var_10 = 8029306728143451197ULL;
int zero = 0;
int var_11 = -2087515365;
unsigned int var_12 = 3361044567U;
int var_13 = -1525491545;
unsigned int var_14 = 3250441895U;
unsigned short var_15 = (unsigned short)23384;
unsigned long long int var_16 = 9653330974401809914ULL;
unsigned short var_17 = (unsigned short)24412;
unsigned long long int var_18 = 12409187878928120855ULL;
int var_19 = 1225126630;
unsigned int var_20 = 1573851769U;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned int arr_2 [15] ;
int arr_5 [15] [15] [15] [15] ;
unsigned short arr_6 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8167;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)1279;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3445813141U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -628667806;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51144;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
