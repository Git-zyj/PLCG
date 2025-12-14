#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15350;
long long int var_2 = 1955502069660688744LL;
_Bool var_3 = (_Bool)0;
int var_8 = -319160358;
int zero = 0;
long long int var_13 = -465580674584311016LL;
unsigned int var_14 = 4254204201U;
unsigned char var_15 = (unsigned char)9;
unsigned char var_16 = (unsigned char)245;
int var_17 = 882879636;
unsigned char arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)184;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
