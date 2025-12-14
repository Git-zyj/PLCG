#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10826;
signed char var_5 = (signed char)-33;
unsigned int var_8 = 3487061231U;
int var_9 = -1166495743;
int zero = 0;
unsigned int var_10 = 2221269085U;
signed char var_11 = (signed char)-56;
unsigned short var_12 = (unsigned short)37832;
int var_13 = 1492484460;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
