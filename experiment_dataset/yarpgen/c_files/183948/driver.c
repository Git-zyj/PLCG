#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)126;
unsigned int var_3 = 4074855572U;
unsigned long long int var_9 = 12656493450767644430ULL;
unsigned int var_10 = 733755239U;
unsigned short var_12 = (unsigned short)15725;
unsigned short var_13 = (unsigned short)38631;
int zero = 0;
unsigned char var_14 = (unsigned char)16;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1201721980U;
short var_17 = (short)-16978;
unsigned char var_18 = (unsigned char)95;
unsigned int arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1402913861U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)19059;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
