#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26760;
unsigned char var_4 = (unsigned char)112;
unsigned int var_7 = 3292391017U;
unsigned long long int var_11 = 11485628712382302588ULL;
unsigned int var_14 = 2933701653U;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
int var_17 = 1708953919;
short var_18 = (short)-10844;
short var_19 = (short)16692;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2334374257U;
unsigned long long int arr_0 [23] [23] ;
short arr_1 [23] ;
short arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 8871207513174651360ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)24770;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-29165;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
