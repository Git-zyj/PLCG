#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_7 = (signed char)-100;
unsigned long long int var_11 = 6695291795636126238ULL;
int zero = 0;
int var_12 = 63873875;
unsigned long long int var_13 = 7664601118753271296ULL;
long long int var_14 = -3265802853683486358LL;
unsigned char var_15 = (unsigned char)196;
short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)14949;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
