#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3190537287215852418ULL;
unsigned long long int var_10 = 3559414090244510481ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)29;
unsigned long long int var_17 = 13076418464662422720ULL;
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
