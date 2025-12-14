#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -692169792;
short var_2 = (short)-21049;
unsigned long long int var_7 = 8781298767467496636ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)138;
unsigned int var_13 = 3832816684U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
