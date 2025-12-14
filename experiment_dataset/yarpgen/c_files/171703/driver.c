#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12326;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-10945;
unsigned short var_14 = (unsigned short)22346;
int zero = 0;
unsigned char var_18 = (unsigned char)252;
signed char var_19 = (signed char)43;
unsigned short var_20 = (unsigned short)51310;
signed char var_21 = (signed char)-36;
int var_22 = 1170737209;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)134;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
