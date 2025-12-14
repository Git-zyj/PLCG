#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 795897226;
signed char var_6 = (signed char)-65;
short var_7 = (short)-26638;
unsigned int var_11 = 3064848171U;
signed char var_12 = (signed char)72;
unsigned int var_15 = 48423431U;
int zero = 0;
unsigned long long int var_16 = 15769461130508261516ULL;
short var_17 = (short)-24509;
int var_18 = 519922118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
