#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8707;
signed char var_7 = (signed char)79;
unsigned long long int var_9 = 7676262526064895563ULL;
int zero = 0;
int var_16 = 1060007551;
unsigned short var_17 = (unsigned short)42027;
unsigned long long int var_18 = 3944095721498598922ULL;
unsigned char var_19 = (unsigned char)240;
short var_20 = (short)-28919;
unsigned short var_21 = (unsigned short)11978;
short arr_4 [23] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-20683;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9379 : (unsigned short)41121;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
