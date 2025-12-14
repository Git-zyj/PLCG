#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2456557492U;
unsigned short var_2 = (unsigned short)59078;
unsigned short var_3 = (unsigned short)60146;
unsigned char var_4 = (unsigned char)66;
unsigned short var_9 = (unsigned short)64029;
unsigned char var_13 = (unsigned char)234;
int var_14 = 797330423;
int zero = 0;
int var_15 = 52346395;
signed char var_16 = (signed char)-36;
unsigned short var_17 = (unsigned short)4865;
unsigned char arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)47121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)31727;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
