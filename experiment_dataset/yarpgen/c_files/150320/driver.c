#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12988250728788295598ULL;
unsigned int var_1 = 2678316868U;
unsigned long long int var_2 = 3720847581728805107ULL;
short var_10 = (short)1933;
int zero = 0;
unsigned char var_13 = (unsigned char)180;
int var_14 = -705922530;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
