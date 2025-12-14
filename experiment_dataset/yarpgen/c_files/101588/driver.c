#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-56;
int var_10 = 2119093686;
unsigned int var_17 = 3320094403U;
unsigned short var_18 = (unsigned short)11134;
int zero = 0;
int var_19 = -405146585;
unsigned char var_20 = (unsigned char)29;
unsigned int var_21 = 3204488904U;
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
