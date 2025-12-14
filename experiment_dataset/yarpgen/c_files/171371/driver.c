#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned char var_3 = (unsigned char)41;
unsigned char var_5 = (unsigned char)170;
unsigned char var_8 = (unsigned char)31;
unsigned int var_9 = 1877544768U;
unsigned char var_10 = (unsigned char)117;
signed char var_14 = (signed char)36;
unsigned short var_15 = (unsigned short)55170;
unsigned short var_17 = (unsigned short)58141;
int var_18 = 1914635216;
int zero = 0;
short var_19 = (short)-11811;
unsigned char var_20 = (unsigned char)167;
void init() {
}

void checksum() {
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
