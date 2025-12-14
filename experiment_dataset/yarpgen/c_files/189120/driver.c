#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51138;
unsigned short var_3 = (unsigned short)12220;
unsigned long long int var_5 = 6668621207024339017ULL;
unsigned short var_6 = (unsigned short)17480;
int var_7 = -1051400953;
unsigned short var_9 = (unsigned short)48944;
int zero = 0;
int var_10 = 589127740;
unsigned long long int var_11 = 8036027767116938924ULL;
unsigned long long int var_12 = 11386995718341095891ULL;
short var_13 = (short)22162;
long long int var_14 = -8250906927344770826LL;
long long int var_15 = 1649159726890060219LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)21448;
long long int var_18 = -3779828972214189383LL;
unsigned int var_19 = 4065103820U;
int var_20 = 2008207873;
short arr_0 [10] [10] ;
short arr_1 [10] [10] ;
_Bool arr_3 [10] ;
short arr_4 [16] ;
long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)21290;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-23594;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)14280;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 8685500993016709505LL;
}

void checksum() {
    hash(&seed, var_10);
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
