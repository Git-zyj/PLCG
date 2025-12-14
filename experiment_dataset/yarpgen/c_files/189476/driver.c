#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22928;
int var_2 = 124970330;
unsigned long long int var_7 = 14926464910773816186ULL;
unsigned short var_9 = (unsigned short)28754;
int zero = 0;
unsigned char var_13 = (unsigned char)226;
unsigned short var_14 = (unsigned short)9938;
void init() {
}

void checksum() {
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
