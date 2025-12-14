#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)57371;
unsigned char var_7 = (unsigned char)110;
unsigned int var_12 = 440842624U;
int zero = 0;
int var_13 = 930551011;
unsigned char var_14 = (unsigned char)31;
unsigned short var_15 = (unsigned short)48378;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
