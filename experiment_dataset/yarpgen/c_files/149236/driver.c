#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4586333101391982634ULL;
unsigned int var_13 = 2034817986U;
unsigned long long int var_16 = 3239136647520569156ULL;
int zero = 0;
short var_19 = (short)-15800;
unsigned char var_20 = (unsigned char)89;
unsigned int var_21 = 1039191824U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
