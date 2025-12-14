#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1995232334155458185LL;
signed char var_9 = (signed char)-125;
unsigned char var_11 = (unsigned char)182;
int zero = 0;
unsigned short var_16 = (unsigned short)39409;
unsigned char var_17 = (unsigned char)69;
unsigned char var_18 = (unsigned char)232;
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
