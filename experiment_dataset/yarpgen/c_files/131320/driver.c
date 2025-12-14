#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16356021372121505356ULL;
unsigned int var_2 = 2859908729U;
int var_4 = 910768936;
signed char var_5 = (signed char)37;
signed char var_7 = (signed char)-60;
unsigned long long int var_9 = 500869725832402210ULL;
int var_10 = -441892993;
short var_11 = (short)19580;
int zero = 0;
int var_12 = 617475538;
unsigned long long int var_13 = 13762939496133911991ULL;
signed char var_14 = (signed char)58;
unsigned int var_15 = 231749813U;
signed char arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-115;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
