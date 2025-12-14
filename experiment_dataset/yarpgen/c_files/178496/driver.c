#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)9999;
short var_11 = (short)25988;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 9318353940494672232ULL;
signed char var_18 = (signed char)107;
unsigned long long int var_19 = 1102436949757754456ULL;
_Bool var_20 = (_Bool)0;
unsigned int arr_1 [21] [21] ;
int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 2063497315U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1097389729;
}

void checksum() {
    hash(&seed, var_17);
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
