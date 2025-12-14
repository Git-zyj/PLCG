#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16030860514563907102ULL;
long long int var_5 = -2947010036940886602LL;
int zero = 0;
unsigned long long int var_10 = 11920709518824202803ULL;
unsigned short var_11 = (unsigned short)22716;
signed char var_12 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
