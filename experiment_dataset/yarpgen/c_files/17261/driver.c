#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 880012750725340714LL;
unsigned int var_5 = 1664677766U;
short var_7 = (short)14819;
int zero = 0;
signed char var_17 = (signed char)9;
unsigned char var_18 = (unsigned char)191;
unsigned int var_19 = 870579758U;
long long int var_20 = 4952445071176579579LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
