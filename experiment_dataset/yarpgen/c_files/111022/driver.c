#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24741;
unsigned long long int var_1 = 5243342683162513716ULL;
short var_6 = (short)30966;
int zero = 0;
unsigned char var_10 = (unsigned char)163;
unsigned char var_11 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
