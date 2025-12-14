#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2271591287U;
unsigned char var_7 = (unsigned char)180;
int zero = 0;
signed char var_10 = (signed char)-12;
long long int var_11 = 7855807886684789883LL;
signed char var_12 = (signed char)20;
signed char var_13 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
