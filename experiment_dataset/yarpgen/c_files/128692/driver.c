#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 515107833;
short var_2 = (short)21171;
unsigned char var_9 = (unsigned char)205;
signed char var_10 = (signed char)-37;
int zero = 0;
unsigned int var_15 = 4247193479U;
int var_16 = 2067048854;
void init() {
}

void checksum() {
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
