#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)18;
unsigned long long int var_13 = 18145427737513296633ULL;
unsigned short var_17 = (unsigned short)51998;
int zero = 0;
short var_19 = (short)2384;
signed char var_20 = (signed char)49;
unsigned long long int var_21 = 12415947546814995039ULL;
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
