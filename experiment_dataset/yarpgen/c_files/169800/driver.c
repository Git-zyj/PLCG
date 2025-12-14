#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned short var_5 = (unsigned short)48460;
signed char var_6 = (signed char)17;
signed char var_9 = (signed char)-68;
short var_10 = (short)-27678;
int zero = 0;
signed char var_16 = (signed char)79;
short var_17 = (short)-10946;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
