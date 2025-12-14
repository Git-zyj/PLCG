#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32492;
int var_3 = 395886787;
short var_7 = (short)6496;
int zero = 0;
unsigned long long int var_10 = 13444890968645514599ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2455545410745306616ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
