#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3591301561873604344LL;
int var_6 = -2137932280;
unsigned char var_7 = (unsigned char)209;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
unsigned int var_10 = 1743307298U;
unsigned char var_11 = (unsigned char)8;
unsigned char var_12 = (unsigned char)50;
short var_13 = (short)-31003;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
