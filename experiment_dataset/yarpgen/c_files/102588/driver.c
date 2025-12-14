#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2138493931;
int var_9 = -1083445571;
unsigned short var_13 = (unsigned short)45797;
int zero = 0;
unsigned int var_19 = 296260883U;
unsigned int var_20 = 74647901U;
signed char var_21 = (signed char)71;
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
