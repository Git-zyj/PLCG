#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1361619443976495029ULL;
long long int var_10 = -6263506652576461494LL;
int var_13 = -1593083201;
unsigned short var_17 = (unsigned short)63956;
int zero = 0;
unsigned int var_18 = 2682804U;
unsigned short var_19 = (unsigned short)27792;
unsigned int var_20 = 1846449007U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4035137086U;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)238 : (unsigned char)6;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
