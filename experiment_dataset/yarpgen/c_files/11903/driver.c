#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2012774305843112062LL;
unsigned int var_3 = 1539503109U;
unsigned short var_6 = (unsigned short)12409;
unsigned short var_7 = (unsigned short)47492;
unsigned char var_8 = (unsigned char)224;
int var_10 = -1902734761;
long long int var_11 = -2272418927800103804LL;
unsigned long long int var_12 = 16053945636279427485ULL;
int zero = 0;
short var_13 = (short)7984;
unsigned int var_14 = 3847507387U;
unsigned int var_15 = 3746268025U;
unsigned int var_16 = 831542803U;
short arr_0 [18] ;
int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-30514 : (short)2425;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1905106120 : -1367243533;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
