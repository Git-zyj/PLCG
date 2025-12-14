#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -182570701;
unsigned int var_3 = 1165770520U;
signed char var_4 = (signed char)13;
unsigned short var_6 = (unsigned short)56704;
int zero = 0;
unsigned long long int var_11 = 2700512431003270362ULL;
unsigned char var_12 = (unsigned char)199;
unsigned short var_13 = (unsigned short)65209;
unsigned long long int arr_3 [10] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 17285518689900651979ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)36812;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
