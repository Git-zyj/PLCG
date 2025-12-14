#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1211434526U;
unsigned char var_18 = (unsigned char)222;
int zero = 0;
unsigned int var_20 = 2965310515U;
signed char var_21 = (signed char)82;
unsigned long long int var_22 = 6764608878283956661ULL;
int var_23 = -1372278916;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
