#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6257616050068666314LL;
unsigned long long int var_6 = 2793381273973673928ULL;
unsigned int var_9 = 1870805071U;
int zero = 0;
unsigned long long int var_11 = 16324311883541656578ULL;
int var_12 = 636715906;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
