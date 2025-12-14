#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1065068714;
short var_2 = (short)16310;
unsigned int var_3 = 4292188740U;
int var_4 = 746814206;
int var_11 = 827834788;
int var_12 = 1016293824;
int zero = 0;
long long int var_15 = 2581416978700574366LL;
short var_16 = (short)-20253;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
