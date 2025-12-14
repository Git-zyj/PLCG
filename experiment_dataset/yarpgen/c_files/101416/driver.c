#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1719332376434613152LL;
unsigned long long int var_4 = 17289009391970113693ULL;
signed char var_5 = (signed char)-67;
signed char var_6 = (signed char)117;
unsigned short var_10 = (unsigned short)20201;
int zero = 0;
short var_11 = (short)13483;
unsigned short var_12 = (unsigned short)64452;
short var_13 = (short)23296;
short var_14 = (short)8462;
unsigned long long int var_15 = 10432797593410991415ULL;
unsigned int arr_0 [23] [23] ;
long long int arr_1 [23] ;
short arr_3 [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3370768125U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -444622771094493469LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)29441 : (short)-4129;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)46484;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
