#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23750;
short var_4 = (short)-32277;
unsigned short var_11 = (unsigned short)7109;
int zero = 0;
long long int var_12 = -1456494779136283030LL;
signed char var_13 = (signed char)119;
unsigned short var_14 = (unsigned short)37336;
unsigned int var_15 = 4088410008U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
