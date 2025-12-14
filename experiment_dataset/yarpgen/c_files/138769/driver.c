#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40194;
unsigned char var_1 = (unsigned char)2;
unsigned char var_2 = (unsigned char)207;
unsigned char var_6 = (unsigned char)42;
unsigned int var_8 = 628029370U;
short var_9 = (short)12162;
int zero = 0;
int var_10 = 2116836622;
unsigned int var_11 = 2216043716U;
unsigned short var_12 = (unsigned short)52217;
unsigned long long int var_13 = 13697013849354982291ULL;
int var_14 = -828146711;
unsigned long long int var_15 = 10615814818362316731ULL;
unsigned int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1285374076U;
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
