#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1220598025U;
int var_10 = -268490653;
unsigned int var_13 = 2067840279U;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
unsigned char var_17 = (unsigned char)134;
unsigned char var_18 = (unsigned char)225;
short var_19 = (short)-32370;
unsigned char var_20 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
