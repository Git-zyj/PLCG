#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1627688607;
signed char var_3 = (signed char)122;
unsigned int var_5 = 672665266U;
signed char var_7 = (signed char)-34;
unsigned long long int var_9 = 9832213014901979246ULL;
int var_10 = 1503761580;
int var_12 = 1380049949;
unsigned int var_13 = 191242423U;
int zero = 0;
unsigned char var_15 = (unsigned char)64;
unsigned char var_16 = (unsigned char)92;
unsigned long long int var_17 = 108788383235258007ULL;
int var_18 = -1446254661;
unsigned char var_19 = (unsigned char)236;
int var_20 = 956747581;
int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
signed char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1881121672 : 654343016;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 4037853326U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)61;
}

void checksum() {
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
