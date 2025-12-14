#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1530349333;
unsigned long long int var_7 = 4298720215740941044ULL;
unsigned char var_8 = (unsigned char)94;
unsigned short var_9 = (unsigned short)20100;
long long int var_15 = -1577048053395758288LL;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
unsigned int var_20 = 3425078354U;
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
