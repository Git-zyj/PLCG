#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2138232466U;
unsigned short var_6 = (unsigned short)31218;
unsigned short var_9 = (unsigned short)38553;
unsigned short var_17 = (unsigned short)28723;
int zero = 0;
unsigned long long int var_19 = 8087090319568270102ULL;
int var_20 = 51036081;
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
