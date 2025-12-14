#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
unsigned long long int var_6 = 8633764960212080205ULL;
unsigned int var_7 = 2631160618U;
unsigned int var_8 = 29480632U;
unsigned int var_9 = 1280405626U;
unsigned int var_10 = 2167923395U;
unsigned int var_13 = 3262034865U;
int zero = 0;
unsigned int var_14 = 4014400270U;
unsigned int var_15 = 3143667910U;
unsigned long long int var_16 = 8820936279390172301ULL;
unsigned char var_17 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
