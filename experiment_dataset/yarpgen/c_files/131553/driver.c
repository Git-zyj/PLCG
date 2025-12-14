#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)45;
long long int var_13 = -2717443373262127639LL;
signed char var_16 = (signed char)-39;
int zero = 0;
unsigned long long int var_17 = 17731666453884995517ULL;
unsigned char var_18 = (unsigned char)21;
long long int var_19 = 6908090569956540069LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
