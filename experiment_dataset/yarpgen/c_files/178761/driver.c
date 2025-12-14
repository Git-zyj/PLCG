#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3439033487878174293LL;
unsigned short var_4 = (unsigned short)52461;
unsigned long long int var_6 = 12919261002010420525ULL;
int zero = 0;
short var_12 = (short)29364;
unsigned short var_13 = (unsigned short)39248;
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
