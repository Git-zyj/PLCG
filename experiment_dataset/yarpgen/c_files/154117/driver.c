#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40786;
int var_2 = 149548715;
unsigned int var_4 = 2196153984U;
int var_7 = -486801625;
long long int var_9 = -5242598584088066947LL;
int var_11 = -999889860;
unsigned int var_12 = 801208526U;
unsigned int var_13 = 4246313462U;
int zero = 0;
unsigned int var_14 = 974753307U;
unsigned short var_15 = (unsigned short)63851;
unsigned short var_16 = (unsigned short)7392;
unsigned int var_17 = 288381850U;
int var_18 = 2138454198;
signed char var_19 = (signed char)-111;
signed char var_20 = (signed char)-52;
unsigned int var_21 = 1373596966U;
int arr_0 [19] [19] ;
unsigned int arr_4 [19] [19] ;
unsigned int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1664364618;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1262434195U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2021298520U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
