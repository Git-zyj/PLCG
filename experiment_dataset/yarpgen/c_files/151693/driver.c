#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14955;
unsigned char var_2 = (unsigned char)216;
signed char var_3 = (signed char)-100;
unsigned int var_7 = 1914659104U;
short var_9 = (short)17456;
int zero = 0;
unsigned short var_11 = (unsigned short)4999;
signed char var_12 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
