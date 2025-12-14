#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8769330566467814724LL;
short var_2 = (short)-13706;
signed char var_4 = (signed char)109;
int var_6 = 1104764545;
int zero = 0;
unsigned char var_10 = (unsigned char)196;
unsigned long long int var_11 = 6496697416243599131ULL;
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
