#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 384366142008806312ULL;
unsigned short var_9 = (unsigned short)9621;
unsigned char var_15 = (unsigned char)79;
int zero = 0;
unsigned int var_20 = 1900636453U;
long long int var_21 = -2449662199878213148LL;
unsigned short var_22 = (unsigned short)2878;
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
