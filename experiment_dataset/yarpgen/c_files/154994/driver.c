#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14452902926399427433ULL;
signed char var_9 = (signed char)-51;
signed char var_10 = (signed char)37;
int zero = 0;
unsigned int var_11 = 1211856571U;
int var_12 = 763932602;
long long int var_13 = -6593585736437090157LL;
void init() {
}

void checksum() {
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
