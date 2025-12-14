#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 969829229773773824ULL;
signed char var_5 = (signed char)67;
unsigned long long int var_8 = 18203488605886939827ULL;
unsigned int var_10 = 1099693081U;
unsigned short var_11 = (unsigned short)28503;
long long int var_14 = 5077089656479808138LL;
int zero = 0;
unsigned short var_17 = (unsigned short)43905;
unsigned int var_18 = 1850027142U;
unsigned short var_19 = (unsigned short)8913;
unsigned long long int arr_0 [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17322239867903233795ULL : 13850637007249046447ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 97001841U;
}

void checksum() {
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
