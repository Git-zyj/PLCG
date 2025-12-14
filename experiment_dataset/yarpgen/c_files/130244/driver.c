#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2972158551557931658LL;
unsigned int var_2 = 2821578978U;
signed char var_5 = (signed char)-13;
unsigned int var_7 = 1027598956U;
unsigned long long int var_13 = 8754124095922192142ULL;
int zero = 0;
unsigned int var_19 = 1984714942U;
unsigned int var_20 = 536384595U;
int var_21 = -732481747;
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
