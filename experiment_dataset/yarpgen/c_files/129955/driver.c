#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2629112164U;
unsigned short var_2 = (unsigned short)47052;
unsigned long long int var_3 = 12537360690514478059ULL;
unsigned long long int var_5 = 13505702474341339842ULL;
unsigned int var_10 = 1002293461U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)24;
unsigned int var_17 = 2273023590U;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)80;
short var_20 = (short)-29465;
unsigned int arr_0 [21] [21] ;
signed char arr_2 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3081574227U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 10755828913771808269ULL;
}

void checksum() {
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
