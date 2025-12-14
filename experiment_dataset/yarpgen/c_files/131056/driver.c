#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned long long int var_2 = 7596776161200462112ULL;
long long int var_5 = -8013261548803758431LL;
unsigned char var_9 = (unsigned char)118;
int zero = 0;
short var_14 = (short)5548;
signed char var_15 = (signed char)69;
void init() {
}

void checksum() {
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
