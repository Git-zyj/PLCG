#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23190;
unsigned int var_2 = 1391451124U;
short var_3 = (short)26820;
int var_5 = 499605335;
int var_6 = 423288069;
unsigned int var_7 = 304185829U;
signed char var_9 = (signed char)-86;
int zero = 0;
int var_11 = 120645539;
unsigned char var_12 = (unsigned char)62;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)47;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1032423194U;
signed char var_17 = (signed char)-77;
signed char var_18 = (signed char)-1;
unsigned short arr_4 [19] [19] [19] ;
long long int arr_10 [19] [19] ;
unsigned short arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)16340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3172040944554887606LL : -2835356560197823588LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20581 : (unsigned short)48648;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
