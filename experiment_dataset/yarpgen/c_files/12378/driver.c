#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-22250;
short var_7 = (short)4009;
unsigned int var_9 = 2640502780U;
int zero = 0;
unsigned char var_11 = (unsigned char)8;
unsigned long long int var_12 = 8930683852898989108ULL;
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
