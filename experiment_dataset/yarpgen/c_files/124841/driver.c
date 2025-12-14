#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_8 = 980713490U;
signed char var_10 = (signed char)-114;
int zero = 0;
unsigned char var_17 = (unsigned char)116;
unsigned int var_18 = 816770613U;
unsigned long long int var_19 = 8249666455189997999ULL;
short var_20 = (short)2661;
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
