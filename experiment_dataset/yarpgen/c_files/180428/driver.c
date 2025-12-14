#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -3152397173290272443LL;
unsigned char var_15 = (unsigned char)236;
int var_16 = -799740134;
int zero = 0;
unsigned char var_17 = (unsigned char)3;
unsigned int var_18 = 453708968U;
long long int var_19 = -3381830621942627140LL;
void init() {
}

void checksum() {
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
