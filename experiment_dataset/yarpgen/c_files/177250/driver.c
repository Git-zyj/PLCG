#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)243;
unsigned char var_5 = (unsigned char)51;
short var_6 = (short)-8023;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned char var_10 = (unsigned char)169;
unsigned long long int var_11 = 9343918528802294990ULL;
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
