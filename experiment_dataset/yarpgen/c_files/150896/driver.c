#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7817327541728809887LL;
long long int var_16 = 9199911509818601806LL;
unsigned short var_17 = (unsigned short)34443;
int zero = 0;
unsigned char var_20 = (unsigned char)196;
long long int var_21 = 2906823730034055864LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
