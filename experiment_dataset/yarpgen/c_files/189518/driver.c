#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
signed char var_4 = (signed char)38;
unsigned short var_6 = (unsigned short)16968;
int var_8 = 1789330580;
unsigned int var_9 = 3194886662U;
unsigned int var_10 = 3835570900U;
int zero = 0;
signed char var_14 = (signed char)23;
unsigned short var_15 = (unsigned short)13231;
unsigned int var_16 = 3726552009U;
short var_17 = (short)21622;
int var_18 = 315900178;
unsigned int var_19 = 3823006514U;
unsigned short var_20 = (unsigned short)16849;
signed char arr_0 [23] [23] ;
int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1108330294;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)55595;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
