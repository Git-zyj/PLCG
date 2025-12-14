#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)0;
unsigned long long int var_6 = 8378857769030748250ULL;
unsigned char var_7 = (unsigned char)144;
int var_8 = 315251187;
unsigned char var_12 = (unsigned char)12;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned int var_17 = 967950628U;
unsigned long long int var_18 = 7977048918463771980ULL;
int var_19 = 1383619787;
unsigned long long int arr_0 [21] ;
int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 14145391492261453260ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -22070189;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
