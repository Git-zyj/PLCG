#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)8193;
unsigned int var_10 = 3794158214U;
unsigned short var_13 = (unsigned short)61513;
int zero = 0;
unsigned int var_14 = 2454000992U;
unsigned short var_15 = (unsigned short)12300;
unsigned short var_16 = (unsigned short)22228;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
