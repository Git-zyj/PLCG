#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
unsigned char var_11 = (unsigned char)96;
unsigned int var_12 = 2392454224U;
unsigned int var_13 = 4150770445U;
int var_15 = -1612151594;
unsigned long long int var_16 = 12061693872551726984ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)9923;
unsigned short var_18 = (unsigned short)56509;
signed char var_19 = (signed char)20;
short var_20 = (short)14200;
signed char arr_0 [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)45;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
