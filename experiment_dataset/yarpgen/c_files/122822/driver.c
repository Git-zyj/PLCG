#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1293209833U;
short var_2 = (short)7132;
unsigned long long int var_6 = 2026537536665089255ULL;
unsigned char var_7 = (unsigned char)249;
int zero = 0;
unsigned char var_11 = (unsigned char)169;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
