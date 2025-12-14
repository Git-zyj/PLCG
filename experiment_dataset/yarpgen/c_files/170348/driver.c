#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4025890355U;
unsigned long long int var_2 = 1487401323516551623ULL;
unsigned int var_6 = 3182348182U;
short var_7 = (short)21377;
int zero = 0;
unsigned char var_13 = (unsigned char)110;
signed char var_14 = (signed char)61;
void init() {
}

void checksum() {
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
