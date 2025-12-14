#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
long long int var_3 = 4565152725993423337LL;
unsigned char var_4 = (unsigned char)189;
long long int var_5 = 8653337321305061693LL;
_Bool var_10 = (_Bool)0;
long long int var_14 = 3027492464859205854LL;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
unsigned char var_21 = (unsigned char)133;
unsigned long long int var_22 = 1070177583021214737ULL;
short var_23 = (short)-16123;
unsigned char var_24 = (unsigned char)234;
short arr_0 [23] [23] ;
_Bool arr_3 [23] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18446;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)140;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
