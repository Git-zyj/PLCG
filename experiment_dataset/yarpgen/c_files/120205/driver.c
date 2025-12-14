#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50212;
long long int var_2 = 6695693873856821186LL;
unsigned short var_4 = (unsigned short)25991;
signed char var_5 = (signed char)-127;
unsigned long long int var_6 = 7927591444135682139ULL;
long long int var_8 = -103750513758063311LL;
int var_9 = 1150669699;
signed char var_10 = (signed char)-100;
int var_11 = -1214152444;
int zero = 0;
signed char var_12 = (signed char)-8;
int var_13 = -27493236;
signed char var_14 = (signed char)81;
short arr_0 [24] ;
int arr_3 [24] ;
long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)28693;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -236459246 : 1349518357;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1219697022771498836LL : -6897546965396034975LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
