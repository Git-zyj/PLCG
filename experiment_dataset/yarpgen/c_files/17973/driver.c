#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 15396122964031723179ULL;
unsigned char var_12 = (unsigned char)65;
int zero = 0;
signed char var_13 = (signed char)-17;
unsigned int var_14 = 3661134780U;
unsigned char var_15 = (unsigned char)126;
signed char var_16 = (signed char)-127;
unsigned short var_17 = (unsigned short)12638;
unsigned char var_18 = (unsigned char)63;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)86;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
