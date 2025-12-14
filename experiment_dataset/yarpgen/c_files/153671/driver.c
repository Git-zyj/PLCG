#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -321211098;
unsigned long long int var_12 = 17934164936754187540ULL;
unsigned short var_16 = (unsigned short)26774;
int zero = 0;
short var_17 = (short)-22904;
short var_18 = (short)-9962;
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
