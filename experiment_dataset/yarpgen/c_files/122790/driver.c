#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9272117752668391485ULL;
unsigned char var_6 = (unsigned char)6;
unsigned long long int var_12 = 3263303129501357758ULL;
int zero = 0;
unsigned long long int var_14 = 9136182939708400883ULL;
unsigned long long int var_15 = 13529670334497766498ULL;
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
