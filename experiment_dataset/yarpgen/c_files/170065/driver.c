#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)53;
int var_9 = 1557498977;
int zero = 0;
unsigned char var_16 = (unsigned char)24;
unsigned short var_17 = (unsigned short)59512;
unsigned char var_18 = (unsigned char)177;
unsigned long long int var_19 = 9654137646798607052ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
