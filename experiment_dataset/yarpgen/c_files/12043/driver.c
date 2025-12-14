#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 254549601U;
long long int var_5 = 4016994934600128561LL;
unsigned long long int var_10 = 574710953424857007ULL;
unsigned int var_14 = 1853704762U;
int zero = 0;
unsigned int var_17 = 2128614160U;
int var_18 = 925585939;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
