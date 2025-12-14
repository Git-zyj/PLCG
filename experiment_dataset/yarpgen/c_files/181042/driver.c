#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 216244979U;
short var_11 = (short)-29083;
int var_17 = 2094099218;
int zero = 0;
unsigned int var_19 = 2203869373U;
long long int var_20 = -1360393447209509337LL;
signed char var_21 = (signed char)115;
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
