#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58969;
long long int var_1 = 3164826931718874525LL;
unsigned long long int var_5 = 17245623143313622863ULL;
unsigned char var_7 = (unsigned char)198;
int var_9 = 770141338;
unsigned short var_10 = (unsigned short)36725;
int var_11 = 1361187020;
unsigned char var_12 = (unsigned char)242;
int zero = 0;
unsigned long long int var_14 = 5815198084316942625ULL;
unsigned char var_15 = (unsigned char)10;
unsigned int var_16 = 3023236620U;
unsigned char var_17 = (unsigned char)182;
unsigned short var_18 = (unsigned short)64552;
unsigned short var_19 = (unsigned short)9237;
unsigned short var_20 = (unsigned short)47998;
unsigned short arr_0 [22] [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33724;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 13465900272589150671ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
