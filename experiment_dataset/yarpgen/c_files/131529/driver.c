#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1965420539;
unsigned int var_4 = 1499122740U;
short var_8 = (short)-8353;
signed char var_10 = (signed char)90;
int zero = 0;
unsigned int var_11 = 3887661296U;
unsigned long long int var_12 = 184550280450749013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
