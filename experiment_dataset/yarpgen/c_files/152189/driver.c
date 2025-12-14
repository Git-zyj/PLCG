#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2026298233;
signed char var_6 = (signed char)-71;
short var_7 = (short)-27293;
int var_11 = -1714781665;
short var_12 = (short)-4813;
int zero = 0;
unsigned int var_13 = 2525472315U;
unsigned char var_14 = (unsigned char)197;
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
