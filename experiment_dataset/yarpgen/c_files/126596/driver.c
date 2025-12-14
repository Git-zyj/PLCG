#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11258794845362607097ULL;
unsigned short var_9 = (unsigned short)17943;
unsigned short var_10 = (unsigned short)58804;
unsigned long long int var_11 = 12199335319878296627ULL;
unsigned short var_12 = (unsigned short)21608;
unsigned char var_14 = (unsigned char)150;
int zero = 0;
unsigned short var_16 = (unsigned short)59285;
unsigned long long int var_17 = 11204647426967438829ULL;
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
