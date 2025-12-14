#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2585298759U;
unsigned long long int var_11 = 5822765037511107145ULL;
unsigned int var_13 = 1283185513U;
int zero = 0;
unsigned char var_14 = (unsigned char)59;
int var_15 = -2096424623;
short var_16 = (short)-25776;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
