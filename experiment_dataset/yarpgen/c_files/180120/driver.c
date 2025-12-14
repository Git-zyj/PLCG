#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)195;
unsigned int var_4 = 3560999376U;
int zero = 0;
unsigned int var_19 = 492907597U;
signed char var_20 = (signed char)-112;
short var_21 = (short)-17257;
unsigned short var_22 = (unsigned short)49842;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
