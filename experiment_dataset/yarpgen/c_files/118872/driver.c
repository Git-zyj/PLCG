#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -220490444;
unsigned int var_8 = 3223030758U;
int var_10 = -1765250537;
int var_12 = 1737738531;
short var_15 = (short)-19142;
int zero = 0;
unsigned short var_16 = (unsigned short)33035;
signed char var_17 = (signed char)82;
unsigned long long int var_18 = 14121963810396399660ULL;
short var_19 = (short)-6006;
signed char arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)93;
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
