#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1795788941;
unsigned long long int var_2 = 1313934702446329058ULL;
short var_8 = (short)-2709;
signed char var_12 = (signed char)-83;
int zero = 0;
long long int var_20 = -2126733320817487592LL;
unsigned int var_21 = 2208432920U;
short var_22 = (short)30369;
unsigned short var_23 = (unsigned short)55035;
signed char var_24 = (signed char)-2;
int arr_0 [14] ;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1836171615;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -5065252362230202080LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
