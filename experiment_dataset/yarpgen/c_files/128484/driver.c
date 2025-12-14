#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1623;
unsigned int var_6 = 1175603178U;
short var_10 = (short)8006;
unsigned long long int var_12 = 5583279171378364977ULL;
int var_13 = -867488570;
int zero = 0;
short var_16 = (short)-11409;
short var_17 = (short)-26173;
unsigned int var_18 = 3319388992U;
unsigned int var_19 = 2524401166U;
short var_20 = (short)29681;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)252;
}

void checksum() {
    hash(&seed, var_16);
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
