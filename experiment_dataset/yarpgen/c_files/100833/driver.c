#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 375524499566272452ULL;
unsigned int var_12 = 4046939417U;
unsigned long long int var_15 = 11257577139104753644ULL;
int zero = 0;
unsigned long long int var_18 = 13842115150047520198ULL;
int var_19 = 1605807127;
void init() {
}

void checksum() {
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
