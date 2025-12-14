#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 657648862045839138LL;
long long int var_3 = 6329488096969350721LL;
long long int var_4 = -8821522664123719783LL;
short var_10 = (short)-18157;
int zero = 0;
unsigned int var_14 = 897760238U;
short var_15 = (short)-7052;
short var_16 = (short)13198;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
