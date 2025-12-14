#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned long long int var_3 = 12591871684178971730ULL;
unsigned long long int var_6 = 2971338447716435593ULL;
int var_12 = -43492972;
int zero = 0;
short var_13 = (short)-8758;
unsigned int var_14 = 3035042627U;
short var_15 = (short)-13111;
unsigned int var_16 = 1688933313U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
