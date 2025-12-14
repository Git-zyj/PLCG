#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -310078206;
unsigned char var_17 = (unsigned char)149;
unsigned short var_19 = (unsigned short)53969;
int zero = 0;
int var_20 = 1950630171;
int var_21 = -426972044;
unsigned char var_22 = (unsigned char)112;
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
