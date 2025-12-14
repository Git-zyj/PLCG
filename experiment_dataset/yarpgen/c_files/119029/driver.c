#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 1127280799U;
short var_12 = (short)12214;
signed char var_13 = (signed char)-62;
int zero = 0;
signed char var_16 = (signed char)-112;
unsigned char var_17 = (unsigned char)103;
unsigned short var_18 = (unsigned short)5227;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
