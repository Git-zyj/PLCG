#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -170961427176142201LL;
unsigned long long int var_9 = 6089996491872164646ULL;
short var_11 = (short)32135;
int zero = 0;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)71;
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
