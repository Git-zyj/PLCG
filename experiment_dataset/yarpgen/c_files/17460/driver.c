#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14452412061296184791ULL;
unsigned short var_5 = (unsigned short)64436;
unsigned short var_7 = (unsigned short)3720;
int zero = 0;
unsigned long long int var_13 = 12767377071568870154ULL;
short var_14 = (short)20872;
signed char var_15 = (signed char)113;
unsigned long long int var_16 = 2353269199712340495ULL;
unsigned short var_17 = (unsigned short)35384;
unsigned short var_18 = (unsigned short)31427;
unsigned char arr_0 [10] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
