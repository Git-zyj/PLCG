#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5314248934190667364LL;
long long int var_8 = 8824504478276180848LL;
unsigned short var_14 = (unsigned short)25438;
int zero = 0;
int var_15 = 2028268575;
unsigned char var_16 = (unsigned char)109;
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
