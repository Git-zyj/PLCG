#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1657714021U;
unsigned short var_10 = (unsigned short)38585;
signed char var_12 = (signed char)-5;
int zero = 0;
unsigned long long int var_15 = 58616193179286387ULL;
unsigned int var_16 = 1523577912U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
