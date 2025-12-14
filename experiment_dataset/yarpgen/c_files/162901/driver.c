#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1647812206;
int var_3 = 1314177298;
unsigned int var_4 = 1450624414U;
unsigned short var_5 = (unsigned short)43839;
int var_6 = -2112554712;
long long int var_9 = -4826810311140982399LL;
short var_10 = (short)-800;
short var_13 = (short)-4118;
unsigned int var_14 = 2659771379U;
int var_15 = 1937328081;
int zero = 0;
unsigned char var_16 = (unsigned char)7;
unsigned char var_17 = (unsigned char)65;
unsigned char var_18 = (unsigned char)230;
unsigned short var_19 = (unsigned short)30697;
unsigned long long int arr_1 [15] ;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 17854990353112451455ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 927481695U;
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
