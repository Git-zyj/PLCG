#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6909524237577240944ULL;
short var_10 = (short)-23705;
unsigned int var_12 = 1122681461U;
short var_16 = (short)31530;
int zero = 0;
int var_17 = 1382439756;
unsigned int var_18 = 2544758021U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)144;
signed char var_21 = (signed char)-119;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)253;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
