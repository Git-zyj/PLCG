#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)68;
unsigned short var_5 = (unsigned short)64713;
long long int var_6 = -2087655630593463082LL;
unsigned int var_7 = 3072182077U;
unsigned short var_10 = (unsigned short)22021;
int zero = 0;
unsigned char var_11 = (unsigned char)123;
unsigned short var_12 = (unsigned short)18041;
unsigned int var_13 = 2475129917U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-70;
unsigned long long int var_16 = 4317248595705487804ULL;
unsigned long long int var_17 = 15131534584460096870ULL;
unsigned short arr_3 [16] [16] [16] ;
unsigned int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)6854;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1473353656U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
