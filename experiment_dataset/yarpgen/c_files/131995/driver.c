#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1787187405U;
unsigned int var_4 = 3711333190U;
unsigned int var_5 = 2002622064U;
unsigned int var_9 = 2220604684U;
int zero = 0;
unsigned int var_12 = 1110647347U;
unsigned int var_13 = 2745296482U;
void init() {
}

void checksum() {
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
