#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -516940907;
unsigned long long int var_3 = 1847263725755073531ULL;
int var_6 = -999198658;
long long int var_11 = -2655895671370681277LL;
int zero = 0;
unsigned long long int var_13 = 17502162512101543144ULL;
long long int var_14 = 2029407005624157755LL;
int var_15 = 1061122027;
unsigned long long int var_16 = 10546728984216055776ULL;
unsigned short var_17 = (unsigned short)33565;
unsigned long long int var_18 = 11574735133393488654ULL;
int arr_4 [19] [19] [19] ;
unsigned short arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1834057329 : -612735234;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)10785 : (unsigned short)48210;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
