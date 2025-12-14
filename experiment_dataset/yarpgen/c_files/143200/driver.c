#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7863879345032759795LL;
int var_3 = 334680374;
unsigned int var_16 = 1497844342U;
int zero = 0;
unsigned int var_19 = 2323784919U;
long long int var_20 = 305043783021365020LL;
int var_21 = 137625405;
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
