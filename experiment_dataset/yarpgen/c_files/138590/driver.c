#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14794;
short var_6 = (short)-3215;
long long int var_11 = 7361693979123762635LL;
int zero = 0;
unsigned int var_13 = 1134236208U;
unsigned char var_14 = (unsigned char)158;
long long int var_15 = -2477923952942157997LL;
void init() {
}

void checksum() {
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
