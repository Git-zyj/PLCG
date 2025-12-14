#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 395468645U;
unsigned short var_1 = (unsigned short)35022;
unsigned int var_3 = 1721327096U;
short var_4 = (short)-16161;
int var_7 = 565378326;
int var_12 = 1765175969;
int zero = 0;
short var_13 = (short)-22792;
long long int var_14 = 1654591264327370051LL;
unsigned short var_15 = (unsigned short)22395;
unsigned long long int var_16 = 15798737204252269639ULL;
short var_17 = (short)-10423;
unsigned int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 789808232U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
