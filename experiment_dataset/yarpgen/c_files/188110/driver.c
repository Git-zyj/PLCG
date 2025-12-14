#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
unsigned int var_4 = 3644103942U;
unsigned char var_5 = (unsigned char)156;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_15 = -1195115678852914313LL;
int zero = 0;
unsigned int var_16 = 1334828211U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 785850204U;
unsigned char var_19 = (unsigned char)228;
long long int var_20 = 163658578611594607LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-5;
unsigned char var_23 = (unsigned char)27;
unsigned int arr_4 [16] [16] ;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2229016456U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -615664409;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
