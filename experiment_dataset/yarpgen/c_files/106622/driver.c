#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3820016854971962098LL;
int var_5 = 1724657500;
unsigned int var_11 = 376109669U;
long long int var_12 = 8609099695074227764LL;
int zero = 0;
short var_14 = (short)19528;
short var_15 = (short)-4869;
short var_16 = (short)16113;
unsigned long long int var_17 = 6546450385134604898ULL;
int var_18 = 68810675;
long long int var_19 = -8274342974199289335LL;
unsigned short arr_0 [13] ;
unsigned int arr_2 [13] [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)42595;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 382447663U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 8750960774593848449LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
