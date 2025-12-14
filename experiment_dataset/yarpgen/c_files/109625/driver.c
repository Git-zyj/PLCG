#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
int var_10 = 1055927256;
short var_14 = (short)-20685;
int zero = 0;
unsigned long long int var_16 = 3208497890843652507ULL;
long long int var_17 = 2286903642747460598LL;
unsigned long long int var_18 = 8697795829952793229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
