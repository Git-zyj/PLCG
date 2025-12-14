#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1748164562;
unsigned long long int var_11 = 6784117414019485427ULL;
unsigned char var_12 = (unsigned char)19;
int zero = 0;
unsigned long long int var_14 = 17717889059089787629ULL;
unsigned char var_15 = (unsigned char)240;
unsigned short var_16 = (unsigned short)20269;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
