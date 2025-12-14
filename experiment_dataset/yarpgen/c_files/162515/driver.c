#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16685;
int var_5 = 1572737878;
unsigned int var_7 = 2944347699U;
unsigned int var_9 = 3650646459U;
unsigned short var_14 = (unsigned short)26326;
int zero = 0;
unsigned char var_17 = (unsigned char)70;
unsigned short var_18 = (unsigned short)61107;
unsigned int var_19 = 4204122324U;
int var_20 = 1358091467;
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
