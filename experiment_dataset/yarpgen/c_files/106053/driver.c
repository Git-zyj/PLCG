#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12806;
unsigned char var_4 = (unsigned char)172;
unsigned long long int var_13 = 362096273340055605ULL;
int zero = 0;
unsigned int var_14 = 2809799990U;
int var_15 = 312328386;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
