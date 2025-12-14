#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8610;
signed char var_5 = (signed char)16;
int var_7 = 1584836498;
short var_8 = (short)2870;
long long int var_16 = 20998524863096439LL;
int zero = 0;
unsigned char var_18 = (unsigned char)12;
unsigned short var_19 = (unsigned short)55708;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
