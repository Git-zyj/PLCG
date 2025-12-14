#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1798056490U;
short var_1 = (short)-26586;
unsigned long long int var_6 = 9937071526588920832ULL;
int zero = 0;
unsigned int var_10 = 1929784432U;
unsigned short var_11 = (unsigned short)46710;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
