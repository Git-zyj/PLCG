#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-938;
unsigned long long int var_10 = 13245604958003046497ULL;
signed char var_16 = (signed char)-30;
int zero = 0;
unsigned long long int var_19 = 8637961571836874146ULL;
short var_20 = (short)22535;
void init() {
}

void checksum() {
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
