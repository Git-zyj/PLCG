#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8231423886810081885LL;
long long int var_5 = -5267745801590583207LL;
unsigned int var_9 = 2623979313U;
int zero = 0;
unsigned long long int var_17 = 2645388471420038260ULL;
unsigned long long int var_18 = 11595229310826802557ULL;
signed char var_19 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
