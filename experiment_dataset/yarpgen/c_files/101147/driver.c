#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25870;
unsigned char var_5 = (unsigned char)39;
short var_11 = (short)-3787;
int zero = 0;
unsigned int var_12 = 2154758332U;
unsigned long long int var_13 = 16378110558671526972ULL;
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
