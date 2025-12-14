#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)44;
unsigned char var_5 = (unsigned char)2;
signed char var_7 = (signed char)32;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned char var_14 = (unsigned char)29;
unsigned char var_15 = (unsigned char)159;
long long int var_16 = 7293281775706123817LL;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)14879;
}

void checksum() {
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
