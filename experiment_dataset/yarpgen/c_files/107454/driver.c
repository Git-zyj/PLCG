#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)132;
unsigned int var_4 = 2762725571U;
long long int var_8 = 5189412131005134887LL;
unsigned int var_12 = 4207951367U;
_Bool var_15 = (_Bool)1;
int var_16 = 1337281544;
unsigned char var_17 = (unsigned char)145;
int zero = 0;
unsigned int var_18 = 640615387U;
unsigned int var_19 = 3822931561U;
unsigned int var_20 = 4154925536U;
unsigned char var_21 = (unsigned char)223;
unsigned char var_22 = (unsigned char)244;
unsigned char arr_0 [14] ;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 794418891850274722LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
