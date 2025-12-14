#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1761837296298283309ULL;
unsigned long long int var_8 = 2512950733840117745ULL;
unsigned long long int var_9 = 7164174594694403825ULL;
unsigned short var_10 = (unsigned short)43672;
int zero = 0;
unsigned long long int var_11 = 3446596237792444367ULL;
unsigned long long int var_12 = 10506313989310299784ULL;
unsigned long long int var_13 = 11398787008969534421ULL;
unsigned short var_14 = (unsigned short)53711;
unsigned short var_15 = (unsigned short)20656;
unsigned short var_16 = (unsigned short)13552;
unsigned short var_17 = (unsigned short)49635;
unsigned long long int var_18 = 2035432131257132440ULL;
unsigned short var_19 = (unsigned short)2998;
unsigned long long int var_20 = 2201060331826446762ULL;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] ;
unsigned short arr_12 [21] [21] ;
unsigned long long int arr_13 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9734200666447363586ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10706711689391051525ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 10799491866475079926ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)16010;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 10806158685161373407ULL;
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
