#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44241;
signed char var_3 = (signed char)-64;
unsigned int var_9 = 1362987604U;
int zero = 0;
short var_19 = (short)14415;
unsigned char var_20 = (unsigned char)2;
long long int var_21 = -652163306324785002LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
