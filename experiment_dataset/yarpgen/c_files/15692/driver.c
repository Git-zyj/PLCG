#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
int var_2 = 1393267895;
unsigned char var_3 = (unsigned char)24;
long long int var_4 = -7718881855911810485LL;
short var_8 = (short)20184;
int zero = 0;
short var_10 = (short)27418;
unsigned char var_11 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
