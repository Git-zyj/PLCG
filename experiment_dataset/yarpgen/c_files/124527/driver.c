#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29339;
unsigned int var_10 = 3416099899U;
unsigned char var_14 = (unsigned char)23;
int zero = 0;
unsigned int var_20 = 36266827U;
unsigned short var_21 = (unsigned short)24806;
unsigned char var_22 = (unsigned char)183;
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
