#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1788744688;
unsigned int var_9 = 3330069149U;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
unsigned int var_17 = 91209571U;
unsigned char var_18 = (unsigned char)59;
unsigned short var_19 = (unsigned short)56286;
unsigned char var_20 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
