#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1773920821;
unsigned int var_5 = 871078348U;
signed char var_10 = (signed char)23;
short var_11 = (short)-9654;
unsigned short var_12 = (unsigned short)6088;
long long int var_13 = 6095928117703780693LL;
int zero = 0;
unsigned long long int var_15 = 14175451271045953679ULL;
unsigned long long int var_16 = 13621014194527441366ULL;
unsigned char var_17 = (unsigned char)160;
unsigned char var_18 = (unsigned char)155;
long long int var_19 = -1691209108465128718LL;
int var_20 = -705265699;
int arr_0 [19] ;
int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 661387400;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -1133934172;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
