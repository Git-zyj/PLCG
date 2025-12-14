#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 728760565;
unsigned short var_5 = (unsigned short)2653;
short var_9 = (short)-16406;
int var_10 = 1076432560;
int zero = 0;
unsigned long long int var_12 = 13959923691174142946ULL;
unsigned short var_13 = (unsigned short)39860;
signed char var_14 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
