#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 96080424;
unsigned int var_3 = 875825668U;
unsigned char var_10 = (unsigned char)61;
int zero = 0;
unsigned long long int var_18 = 4132012321222591184ULL;
int var_19 = 1621713801;
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
