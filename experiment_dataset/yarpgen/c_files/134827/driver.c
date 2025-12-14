#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1395275656;
int var_5 = 1451033103;
unsigned long long int var_6 = 11006425802779979299ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)35879;
unsigned char var_11 = (unsigned char)48;
int var_12 = 1396618122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
