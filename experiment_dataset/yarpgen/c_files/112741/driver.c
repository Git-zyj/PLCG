#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 186120473U;
unsigned char var_3 = (unsigned char)247;
unsigned long long int var_4 = 9293157749063451270ULL;
unsigned long long int var_10 = 508618018454426845ULL;
int zero = 0;
unsigned long long int var_18 = 15414281143035839740ULL;
long long int var_19 = 8581095765507494020LL;
unsigned char var_20 = (unsigned char)60;
int var_21 = -135907924;
int var_22 = 1247407107;
int arr_0 [19] [19] ;
signed char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -273999421;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)122;
}

void checksum() {
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
