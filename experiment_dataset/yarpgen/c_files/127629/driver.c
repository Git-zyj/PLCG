#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 944475825;
unsigned long long int var_7 = 8547622043455759503ULL;
unsigned short var_13 = (unsigned short)26492;
int zero = 0;
signed char var_14 = (signed char)35;
unsigned long long int var_15 = 2980812912803848662ULL;
unsigned long long int var_16 = 10223932456703125541ULL;
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
