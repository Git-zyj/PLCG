#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31145;
int var_8 = -433205803;
int var_12 = -1145221492;
int zero = 0;
long long int var_14 = 6261372313942925067LL;
unsigned int var_15 = 2049207655U;
unsigned short var_16 = (unsigned short)40167;
unsigned char var_17 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
