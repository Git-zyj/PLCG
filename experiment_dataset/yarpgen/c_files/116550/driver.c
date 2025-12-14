#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3323287826777652386LL;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)134;
unsigned char var_8 = (unsigned char)248;
signed char var_12 = (signed char)5;
unsigned short var_13 = (unsigned short)10045;
int zero = 0;
unsigned char var_15 = (unsigned char)92;
long long int var_16 = -6498919704987575100LL;
unsigned short var_17 = (unsigned short)34055;
signed char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
