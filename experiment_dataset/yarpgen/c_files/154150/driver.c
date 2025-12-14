#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32157;
long long int var_6 = -6134473134429968147LL;
unsigned short var_9 = (unsigned short)28302;
unsigned char var_11 = (unsigned char)146;
short var_12 = (short)-4475;
int zero = 0;
unsigned int var_15 = 1341993710U;
long long int var_16 = -734121391924381356LL;
void init() {
}

void checksum() {
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
