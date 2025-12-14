#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
signed char var_7 = (signed char)-113;
unsigned int var_10 = 2707953992U;
long long int var_14 = 6805424940819393289LL;
int zero = 0;
unsigned long long int var_16 = 8600509385188840030ULL;
short var_17 = (short)-3424;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
