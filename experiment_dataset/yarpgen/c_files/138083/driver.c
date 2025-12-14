#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1429830476;
int var_15 = -522387369;
signed char var_16 = (signed char)-127;
int zero = 0;
unsigned long long int var_18 = 16892878806504295634ULL;
short var_19 = (short)-16954;
short var_20 = (short)-13650;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
