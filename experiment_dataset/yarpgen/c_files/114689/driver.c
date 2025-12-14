#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29056;
unsigned char var_4 = (unsigned char)223;
unsigned int var_10 = 3565192913U;
signed char var_12 = (signed char)-96;
int zero = 0;
unsigned long long int var_14 = 17665725362905441095ULL;
signed char var_15 = (signed char)-68;
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
