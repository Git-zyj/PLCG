#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61194;
unsigned char var_3 = (unsigned char)109;
short var_6 = (short)-13342;
unsigned short var_11 = (unsigned short)59252;
unsigned long long int var_15 = 12786175631699264815ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)30854;
int var_20 = -881540273;
void init() {
}

void checksum() {
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
