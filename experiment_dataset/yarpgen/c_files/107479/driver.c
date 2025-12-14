#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20205;
unsigned char var_4 = (unsigned char)60;
signed char var_6 = (signed char)-49;
unsigned short var_11 = (unsigned short)34795;
long long int var_12 = 6860802554143005651LL;
int zero = 0;
long long int var_13 = -1477208211621041785LL;
signed char var_14 = (signed char)75;
unsigned short var_15 = (unsigned short)53690;
unsigned long long int var_16 = 14720236003433416072ULL;
int var_17 = 774936596;
int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1002698760 : -841227428;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
