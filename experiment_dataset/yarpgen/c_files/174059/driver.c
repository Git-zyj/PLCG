#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6282374630560115284ULL;
int var_5 = -163487951;
long long int var_9 = 129679496629071180LL;
unsigned char var_14 = (unsigned char)113;
int zero = 0;
unsigned char var_19 = (unsigned char)26;
short var_20 = (short)22619;
unsigned int var_21 = 2129013375U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
