#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2862820041U;
unsigned int var_1 = 4007521250U;
long long int var_2 = 3920829537582303915LL;
long long int var_3 = 8146343637680355261LL;
int var_8 = 835721340;
unsigned char var_10 = (unsigned char)2;
signed char var_11 = (signed char)-19;
int zero = 0;
unsigned int var_12 = 2258690345U;
long long int var_13 = -4582081306312913558LL;
short var_14 = (short)12696;
unsigned char arr_0 [20] ;
unsigned int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 306710449U;
}

void checksum() {
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
