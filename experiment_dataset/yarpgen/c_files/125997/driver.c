#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15582904539480877328ULL;
unsigned int var_3 = 2726312173U;
long long int var_4 = 7042293000759000133LL;
unsigned long long int var_6 = 4936085240986976318ULL;
unsigned short var_7 = (unsigned short)1930;
long long int var_10 = -6628944391986758724LL;
int zero = 0;
unsigned long long int var_16 = 4390515764003008243ULL;
unsigned short var_17 = (unsigned short)10259;
unsigned short var_18 = (unsigned short)28974;
unsigned int var_19 = 108377532U;
long long int var_20 = 5133015270381279431LL;
short arr_4 [10] [10] ;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-24392;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)66;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
