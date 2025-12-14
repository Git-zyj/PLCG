#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19328;
short var_3 = (short)-12514;
unsigned int var_8 = 536344517U;
int zero = 0;
short var_10 = (short)30456;
signed char var_11 = (signed char)-48;
signed char var_12 = (signed char)98;
int var_13 = -1419247585;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6788169338651887891LL;
unsigned int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3426160291U;
}

void checksum() {
    hash(&seed, var_10);
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
