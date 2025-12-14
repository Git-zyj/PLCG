#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -421379456;
signed char var_7 = (signed char)122;
unsigned char var_8 = (unsigned char)182;
short var_9 = (short)21221;
unsigned short var_10 = (unsigned short)2227;
signed char var_12 = (signed char)-56;
long long int var_15 = 6963689574375880011LL;
int zero = 0;
long long int var_17 = 5715287181688598770LL;
int var_18 = 428212057;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
