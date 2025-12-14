#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -116958212;
int var_1 = -1924445750;
unsigned char var_4 = (unsigned char)76;
int var_10 = -739237589;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
unsigned int var_13 = 3681007371U;
short var_14 = (short)-21962;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
