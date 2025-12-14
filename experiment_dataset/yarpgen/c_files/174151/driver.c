#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -288436538;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 3065883778U;
unsigned int var_13 = 241797204U;
int zero = 0;
long long int var_15 = -5296695967677422639LL;
unsigned int var_16 = 1019926805U;
void init() {
}

void checksum() {
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
