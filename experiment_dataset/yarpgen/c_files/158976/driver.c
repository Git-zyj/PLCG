#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
short var_5 = (short)24654;
unsigned char var_9 = (unsigned char)51;
int var_16 = -1721022629;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
unsigned int var_20 = 87406790U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
