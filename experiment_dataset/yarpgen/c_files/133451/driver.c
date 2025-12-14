#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54538;
unsigned short var_7 = (unsigned short)36600;
unsigned short var_9 = (unsigned short)27624;
int zero = 0;
unsigned short var_13 = (unsigned short)32273;
unsigned short var_14 = (unsigned short)28795;
unsigned int var_15 = 1475419468U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
