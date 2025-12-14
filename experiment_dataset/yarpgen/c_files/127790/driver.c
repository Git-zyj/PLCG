#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2893168943824146909ULL;
unsigned int var_7 = 3906275088U;
short var_12 = (short)-13160;
unsigned long long int var_17 = 15173621958083087477ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)36562;
unsigned int var_19 = 2998507350U;
signed char var_20 = (signed char)4;
int arr_0 [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1318328105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)7366;
}

void checksum() {
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
