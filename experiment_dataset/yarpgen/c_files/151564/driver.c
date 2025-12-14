#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
unsigned char var_2 = (unsigned char)7;
long long int var_5 = -6055915539155594055LL;
unsigned int var_8 = 2712874968U;
int zero = 0;
unsigned char var_11 = (unsigned char)251;
int var_12 = 1759292613;
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
