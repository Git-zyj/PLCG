#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6575;
unsigned long long int var_4 = 17430535591466754211ULL;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
unsigned int var_17 = 4186078623U;
unsigned char var_18 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
