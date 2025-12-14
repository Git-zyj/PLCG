#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned short var_1 = (unsigned short)58195;
short var_2 = (short)-16341;
unsigned long long int var_7 = 14765075587878780655ULL;
unsigned long long int var_8 = 6128526570991299344ULL;
signed char var_10 = (signed char)15;
int zero = 0;
short var_11 = (short)5186;
signed char var_12 = (signed char)97;
unsigned short var_13 = (unsigned short)12987;
signed char var_14 = (signed char)-102;
int var_15 = 963072527;
unsigned int arr_0 [19] ;
short arr_1 [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2753222159U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)12882;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-1171;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
