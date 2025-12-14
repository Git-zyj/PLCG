#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3023493398U;
signed char var_13 = (signed char)-124;
unsigned short var_14 = (unsigned short)56087;
int var_15 = 678815881;
unsigned short var_17 = (unsigned short)19710;
int zero = 0;
unsigned short var_20 = (unsigned short)34720;
unsigned short var_21 = (unsigned short)27511;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
