#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-63;
unsigned short var_11 = (unsigned short)47694;
unsigned char var_15 = (unsigned char)63;
int zero = 0;
long long int var_16 = 2458758316351623318LL;
signed char var_17 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
