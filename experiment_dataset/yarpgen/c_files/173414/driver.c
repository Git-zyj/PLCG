#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15911989985429315975ULL;
unsigned short var_13 = (unsigned short)42542;
int zero = 0;
unsigned int var_17 = 2991956674U;
unsigned short var_18 = (unsigned short)4693;
signed char var_19 = (signed char)37;
unsigned char var_20 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
