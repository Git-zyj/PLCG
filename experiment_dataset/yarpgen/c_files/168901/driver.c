#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3374644730U;
long long int var_2 = 4293445109609930523LL;
long long int var_7 = -5765352647541214934LL;
int var_9 = -1673659560;
int zero = 0;
short var_14 = (short)23026;
unsigned short var_15 = (unsigned short)41794;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
