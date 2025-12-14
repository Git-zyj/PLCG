#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27379;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)167;
unsigned long long int var_13 = 18430237834103879823ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2799547213275024239LL;
_Bool var_16 = (_Bool)1;
unsigned long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 14804006081964475589ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
