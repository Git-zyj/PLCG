#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4121351176107225643LL;
unsigned int var_5 = 2867749459U;
signed char var_6 = (signed char)2;
unsigned char var_9 = (unsigned char)101;
unsigned long long int var_13 = 17339152462097010138ULL;
int zero = 0;
int var_14 = -1309434721;
short var_15 = (short)-7196;
void init() {
}

void checksum() {
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
