#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16547;
unsigned char var_1 = (unsigned char)223;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 6200883783122183531ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
unsigned char var_17 = (unsigned char)220;
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
