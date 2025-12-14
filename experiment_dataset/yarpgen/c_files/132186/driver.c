#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned short var_2 = (unsigned short)57471;
unsigned int var_3 = 2959245286U;
int var_5 = 2132730125;
unsigned long long int var_6 = 6218101140472980296ULL;
int zero = 0;
unsigned long long int var_10 = 4611148415490210005ULL;
unsigned int var_11 = 3271507740U;
int var_12 = -1814161209;
unsigned long long int var_13 = 9163197148938684476ULL;
short var_14 = (short)-4261;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3870673945U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-30025;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 8129557789770787095ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
