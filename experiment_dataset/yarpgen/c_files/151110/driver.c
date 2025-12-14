#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)1;
unsigned char var_4 = (unsigned char)186;
unsigned int var_5 = 1317086210U;
unsigned long long int var_9 = 12159882701980413785ULL;
unsigned char var_10 = (unsigned char)234;
int zero = 0;
long long int var_15 = -2233453231286606851LL;
unsigned short var_16 = (unsigned short)55231;
signed char var_17 = (signed char)-3;
long long int var_18 = -2026225551818963817LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
