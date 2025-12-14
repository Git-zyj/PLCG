#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-14864;
unsigned char var_13 = (unsigned char)139;
short var_17 = (short)20176;
int zero = 0;
int var_18 = -22092290;
unsigned char var_19 = (unsigned char)33;
signed char var_20 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
