#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 45693445730917733ULL;
short var_1 = (short)-30114;
int var_2 = -1972980090;
unsigned long long int var_6 = 16541217087383795954ULL;
short var_7 = (short)-11776;
short var_9 = (short)-12963;
int var_10 = 1936076472;
unsigned int var_11 = 2964455565U;
int zero = 0;
unsigned long long int var_13 = 18049313485107956617ULL;
short var_14 = (short)-11121;
short var_15 = (short)22918;
int var_16 = -2137372537;
unsigned int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4000819270U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
