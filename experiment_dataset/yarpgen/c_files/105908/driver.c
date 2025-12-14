#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1075542765;
signed char var_9 = (signed char)6;
unsigned int var_10 = 3514636845U;
int zero = 0;
int var_14 = 1933023937;
unsigned char var_15 = (unsigned char)126;
unsigned long long int var_16 = 2798895841802958205ULL;
unsigned long long int var_17 = 2213973722661128863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
