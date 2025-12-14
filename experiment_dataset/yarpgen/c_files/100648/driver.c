#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 5296795442279698208LL;
unsigned char var_11 = (unsigned char)80;
long long int var_17 = -6885624941947009336LL;
int zero = 0;
long long int var_20 = 4667529601260165542LL;
unsigned char var_21 = (unsigned char)221;
signed char var_22 = (signed char)115;
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
