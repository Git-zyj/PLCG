#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1938400315;
signed char var_4 = (signed char)87;
int var_5 = 2145079241;
signed char var_6 = (signed char)-48;
unsigned int var_8 = 4053974704U;
int var_9 = 1057776649;
int zero = 0;
int var_12 = 2037772813;
signed char var_13 = (signed char)-121;
unsigned long long int var_14 = 15112448703386678072ULL;
long long int var_15 = -5932710794031686077LL;
short arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-23591;
}

void checksum() {
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
