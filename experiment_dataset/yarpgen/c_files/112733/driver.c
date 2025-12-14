#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)152;
unsigned char var_8 = (unsigned char)171;
int var_10 = -1284909491;
int zero = 0;
unsigned long long int var_14 = 18434492444387705269ULL;
unsigned char var_15 = (unsigned char)52;
unsigned long long int var_16 = 10289008596536101880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
