#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 3680742242519125345ULL;
int var_6 = -1976211605;
long long int var_7 = 8792502597264977007LL;
unsigned long long int var_8 = 6257284133906580814ULL;
unsigned short var_10 = (unsigned short)35299;
int zero = 0;
signed char var_13 = (signed char)105;
int var_14 = 811788472;
unsigned long long int var_15 = 10572634499371662008ULL;
unsigned short var_16 = (unsigned short)62756;
long long int var_17 = 3782837937756873998LL;
unsigned short arr_1 [10] ;
unsigned char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)407;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)102 : (unsigned char)100;
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
