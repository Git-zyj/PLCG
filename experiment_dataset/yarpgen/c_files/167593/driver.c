#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9794;
short var_2 = (short)19345;
unsigned short var_8 = (unsigned short)10980;
signed char var_12 = (signed char)-53;
unsigned int var_13 = 70098370U;
int zero = 0;
unsigned char var_20 = (unsigned char)49;
unsigned int var_21 = 718624689U;
unsigned int var_22 = 1298179568U;
void init() {
}

void checksum() {
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
