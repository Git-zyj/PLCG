#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1228953599U;
int var_1 = -156996756;
signed char var_4 = (signed char)53;
unsigned char var_6 = (unsigned char)79;
unsigned char var_12 = (unsigned char)37;
int var_13 = 1295761251;
int zero = 0;
signed char var_14 = (signed char)-80;
unsigned int var_15 = 2121641904U;
unsigned short var_16 = (unsigned short)8481;
unsigned int var_17 = 1634956622U;
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
