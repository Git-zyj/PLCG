#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -697939723;
short var_5 = (short)19417;
unsigned long long int var_9 = 9206650992727240662ULL;
unsigned long long int var_10 = 13646244930955557104ULL;
unsigned char var_11 = (unsigned char)237;
int zero = 0;
unsigned long long int var_12 = 2055938708953560142ULL;
unsigned char var_13 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
