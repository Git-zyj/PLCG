#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4830611354331692208ULL;
long long int var_12 = 7368809494634085339LL;
int zero = 0;
unsigned long long int var_18 = 6867173941405053814ULL;
long long int var_19 = -4771799268334060662LL;
void init() {
}

void checksum() {
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
