#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7197816914772011635LL;
unsigned char var_2 = (unsigned char)198;
int var_3 = -188340739;
unsigned long long int var_4 = 8254715497137299180ULL;
unsigned int var_5 = 1375511101U;
unsigned char var_6 = (unsigned char)201;
unsigned char var_7 = (unsigned char)196;
unsigned short var_8 = (unsigned short)34648;
signed char var_9 = (signed char)85;
unsigned char var_10 = (unsigned char)235;
unsigned int var_13 = 2490770624U;
long long int var_15 = 2516822824841690506LL;
unsigned long long int var_16 = 7851962976962548120ULL;
int zero = 0;
unsigned long long int var_17 = 13657878363836152762ULL;
short var_18 = (short)2394;
int var_19 = -290206147;
unsigned long long int var_20 = 18308982335796534032ULL;
int var_21 = 1338234929;
unsigned int var_22 = 2307976911U;
int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -1283026037;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
