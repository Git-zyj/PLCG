#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6997735488930158394LL;
unsigned short var_1 = (unsigned short)43403;
unsigned char var_12 = (unsigned char)55;
unsigned char var_19 = (unsigned char)13;
int zero = 0;
unsigned short var_20 = (unsigned short)17867;
unsigned int var_21 = 189327237U;
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
