#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1647389999;
int var_4 = 620721093;
signed char var_10 = (signed char)25;
int var_12 = -2145677717;
int zero = 0;
unsigned char var_14 = (unsigned char)145;
int var_15 = 1834900826;
void init() {
}

void checksum() {
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
