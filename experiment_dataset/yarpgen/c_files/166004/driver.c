#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2654394727985587766LL;
int var_6 = -1281153106;
unsigned int var_9 = 2274565588U;
short var_13 = (short)-3354;
int zero = 0;
unsigned char var_15 = (unsigned char)1;
unsigned char var_16 = (unsigned char)63;
unsigned int var_17 = 1045790405U;
void init() {
}

void checksum() {
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
