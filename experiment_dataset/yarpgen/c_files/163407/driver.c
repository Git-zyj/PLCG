#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1011863347667466572LL;
long long int var_8 = -6464831578880969259LL;
int zero = 0;
long long int var_11 = 4747355339109762544LL;
long long int var_12 = -5680905094026441612LL;
long long int var_13 = 261778667012512820LL;
long long int var_14 = -5077960008395626464LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
