#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned long long int var_2 = 8567814255363797013ULL;
short var_5 = (short)-12342;
int zero = 0;
int var_20 = -342810272;
unsigned int var_21 = 1512475275U;
unsigned long long int var_22 = 5759330253040079372ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
