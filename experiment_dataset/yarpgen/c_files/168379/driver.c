#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 2001104623;
int var_3 = -249877509;
int var_4 = -967293314;
unsigned short var_5 = (unsigned short)28578;
unsigned short var_7 = (unsigned short)12391;
unsigned short var_9 = (unsigned short)3391;
unsigned long long int var_10 = 13954724956711701652ULL;
unsigned long long int var_11 = 14616060157594204791ULL;
int zero = 0;
long long int var_12 = -7065115875933667443LL;
unsigned long long int var_13 = 5085236254036106635ULL;
unsigned int var_14 = 3001202398U;
unsigned short var_15 = (unsigned short)24944;
unsigned short var_16 = (unsigned short)41887;
_Bool arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
