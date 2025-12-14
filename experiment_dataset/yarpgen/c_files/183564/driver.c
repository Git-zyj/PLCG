#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
short var_1 = (short)12639;
unsigned char var_2 = (unsigned char)249;
short var_7 = (short)-2044;
unsigned char var_8 = (unsigned char)184;
int zero = 0;
unsigned char var_12 = (unsigned char)209;
long long int var_13 = -6404721489892330488LL;
int var_14 = -343869305;
unsigned int var_15 = 1226952397U;
short arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)19000;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 3408041220U;
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
