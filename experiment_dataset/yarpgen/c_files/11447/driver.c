#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19844;
int var_1 = 1207856378;
unsigned long long int var_2 = 2369914657151483957ULL;
unsigned char var_4 = (unsigned char)246;
int zero = 0;
long long int var_13 = -2859284927454884594LL;
int var_14 = 2121672620;
unsigned int var_15 = 2325382803U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
