#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned char var_4 = (unsigned char)218;
unsigned char var_6 = (unsigned char)38;
unsigned char var_9 = (unsigned char)188;
unsigned char var_11 = (unsigned char)161;
int zero = 0;
signed char var_16 = (signed char)78;
long long int var_17 = -7002608960577436336LL;
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
