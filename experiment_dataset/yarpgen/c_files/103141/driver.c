#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)9;
unsigned short var_10 = (unsigned short)29316;
unsigned short var_14 = (unsigned short)27306;
int zero = 0;
unsigned long long int var_16 = 18097084362911191634ULL;
signed char var_17 = (signed char)122;
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
