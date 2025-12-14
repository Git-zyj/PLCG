#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-11911;
signed char var_8 = (signed char)16;
unsigned short var_10 = (unsigned short)12021;
short var_12 = (short)109;
unsigned short var_14 = (unsigned short)24459;
long long int var_15 = 595564048964226559LL;
_Bool var_16 = (_Bool)1;
int var_17 = -522306042;
int zero = 0;
short var_18 = (short)-7266;
int var_19 = 1513035346;
int var_20 = 396945517;
int var_21 = -1513902204;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)22754;
unsigned long long int arr_2 [10] [10] [10] ;
_Bool arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 12741910875224685684ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
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
