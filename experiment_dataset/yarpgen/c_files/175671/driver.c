#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 733526498U;
signed char var_13 = (signed char)-3;
unsigned short var_16 = (unsigned short)61664;
signed char var_17 = (signed char)23;
int zero = 0;
unsigned short var_20 = (unsigned short)11748;
unsigned char var_21 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
