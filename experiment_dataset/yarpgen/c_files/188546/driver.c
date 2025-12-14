#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8846020051680336455ULL;
unsigned long long int var_13 = 9912180987363531042ULL;
short var_14 = (short)12382;
int zero = 0;
unsigned long long int var_17 = 7159005559044904541ULL;
unsigned char var_18 = (unsigned char)226;
short var_19 = (short)14762;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
