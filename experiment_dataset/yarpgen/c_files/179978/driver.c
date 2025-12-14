#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1857756457U;
unsigned int var_4 = 1285923683U;
unsigned short var_5 = (unsigned short)14229;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
int var_21 = 1501313315;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
