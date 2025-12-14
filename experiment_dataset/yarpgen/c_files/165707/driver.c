#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-7229;
unsigned long long int var_14 = 13994156975846353227ULL;
int var_17 = -1321587105;
int zero = 0;
unsigned short var_19 = (unsigned short)45000;
unsigned short var_20 = (unsigned short)27075;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
