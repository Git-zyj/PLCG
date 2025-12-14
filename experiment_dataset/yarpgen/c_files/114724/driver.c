#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned long long int var_7 = 5564051459013733553ULL;
unsigned long long int var_8 = 4696427112345369459ULL;
int zero = 0;
short var_13 = (short)-5773;
int var_14 = 918272190;
unsigned char var_15 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
