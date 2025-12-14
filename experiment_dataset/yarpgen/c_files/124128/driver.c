#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1923225614;
long long int var_2 = -5827273030363102551LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 188710571;
unsigned long long int var_11 = 14013111193299427992ULL;
int var_12 = 1865712840;
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
