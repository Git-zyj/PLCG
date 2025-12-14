#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)110;
long long int var_4 = 6497916559562124569LL;
signed char var_11 = (signed char)92;
signed char var_12 = (signed char)64;
int zero = 0;
unsigned short var_14 = (unsigned short)11917;
unsigned char var_15 = (unsigned char)185;
unsigned long long int var_16 = 18094324889696550293ULL;
unsigned char var_17 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
