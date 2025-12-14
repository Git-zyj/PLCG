#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
signed char var_3 = (signed char)-126;
short var_5 = (short)2550;
unsigned int var_6 = 3413128421U;
unsigned long long int var_10 = 18217531032797525546ULL;
int zero = 0;
unsigned int var_11 = 1869634157U;
unsigned char var_12 = (unsigned char)58;
signed char var_13 = (signed char)8;
signed char var_14 = (signed char)124;
int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1920967410 : 1398370176;
}

void checksum() {
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
