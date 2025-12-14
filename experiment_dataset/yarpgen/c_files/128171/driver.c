#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1686115005;
unsigned char var_6 = (unsigned char)165;
unsigned char var_7 = (unsigned char)21;
int zero = 0;
short var_10 = (short)-17218;
unsigned long long int var_11 = 8302193640930316785ULL;
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
