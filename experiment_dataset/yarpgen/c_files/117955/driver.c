#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2042532318U;
unsigned int var_2 = 2612860046U;
long long int var_3 = -7345883115272909093LL;
int var_4 = 2043199400;
long long int var_5 = 5657376101728837111LL;
long long int var_6 = -4293276442197761070LL;
int var_7 = 1379345840;
signed char var_8 = (signed char)70;
int zero = 0;
unsigned short var_10 = (unsigned short)11800;
signed char var_11 = (signed char)23;
unsigned int var_12 = 4160225931U;
unsigned short var_13 = (unsigned short)25475;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
