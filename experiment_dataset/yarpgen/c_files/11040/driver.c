#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7873;
unsigned short var_1 = (unsigned short)59969;
unsigned char var_9 = (unsigned char)85;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
unsigned long long int var_15 = 1299335228412713624ULL;
unsigned long long int var_16 = 17109763386246487189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
