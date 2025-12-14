#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6557391990353481987LL;
unsigned char var_5 = (unsigned char)191;
unsigned short var_9 = (unsigned short)51424;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
unsigned short var_19 = (unsigned short)24000;
unsigned int var_20 = 2251802457U;
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
