#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1442301683;
unsigned char var_6 = (unsigned char)105;
signed char var_12 = (signed char)9;
unsigned long long int var_13 = 14486504664833026402ULL;
int zero = 0;
int var_17 = -1165628973;
unsigned short var_18 = (unsigned short)24197;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
