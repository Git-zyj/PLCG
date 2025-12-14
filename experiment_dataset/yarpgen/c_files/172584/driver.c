#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36095;
unsigned short var_3 = (unsigned short)52359;
unsigned long long int var_4 = 17877700609585627817ULL;
unsigned int var_15 = 2331719312U;
int zero = 0;
short var_20 = (short)-17445;
unsigned char var_21 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
