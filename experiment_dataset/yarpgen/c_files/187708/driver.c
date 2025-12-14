#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16898;
short var_2 = (short)-18313;
unsigned int var_5 = 3637180698U;
unsigned int var_7 = 2248727007U;
int zero = 0;
long long int var_11 = 6486528294834498624LL;
unsigned long long int var_12 = 14114466905549602297ULL;
int var_13 = 801499200;
short var_14 = (short)13852;
unsigned short var_15 = (unsigned short)16426;
unsigned int arr_0 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 4160376071U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
