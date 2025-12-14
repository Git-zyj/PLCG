#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -101783436;
int var_1 = -534434847;
short var_2 = (short)-28291;
_Bool var_5 = (_Bool)1;
int var_10 = -2121694159;
unsigned long long int var_12 = 13830120971474556045ULL;
int var_13 = -1105978107;
unsigned long long int var_15 = 15860094998950688098ULL;
int zero = 0;
unsigned long long int var_18 = 16755237330795787833ULL;
unsigned long long int var_19 = 8510305939870886619ULL;
unsigned long long int var_20 = 17795869330094143032ULL;
_Bool var_21 = (_Bool)0;
short arr_1 [10] ;
short arr_3 [10] ;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)396;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-32654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-28793;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
