#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28775;
long long int var_3 = 4382706288408452974LL;
unsigned char var_4 = (unsigned char)209;
unsigned char var_7 = (unsigned char)73;
short var_9 = (short)-32095;
int zero = 0;
short var_11 = (short)21414;
short var_12 = (short)17423;
long long int var_13 = -4475267574160044855LL;
short var_14 = (short)-20406;
signed char var_15 = (signed char)33;
unsigned char var_16 = (unsigned char)23;
unsigned char var_17 = (unsigned char)21;
unsigned char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)38;
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
