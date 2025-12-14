#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)26880;
int var_13 = -1993089034;
unsigned short var_15 = (unsigned short)48899;
unsigned short var_17 = (unsigned short)57259;
int zero = 0;
int var_19 = -96755611;
unsigned short var_20 = (unsigned short)35496;
signed char var_21 = (signed char)102;
unsigned short arr_0 [10] ;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)25695;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 13119006583661975642ULL;
}

void checksum() {
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
