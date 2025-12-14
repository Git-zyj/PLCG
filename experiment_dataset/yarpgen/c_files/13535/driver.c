#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 607178877;
unsigned char var_4 = (unsigned char)184;
int var_6 = 2116561733;
int var_7 = -772351353;
int zero = 0;
long long int var_12 = 2194282728206311306LL;
unsigned char var_13 = (unsigned char)163;
int var_14 = 1846772712;
unsigned char var_15 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
