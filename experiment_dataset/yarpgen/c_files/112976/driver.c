#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3477234239174310881LL;
unsigned short var_9 = (unsigned short)13821;
short var_10 = (short)13409;
short var_12 = (short)-18677;
int zero = 0;
signed char var_18 = (signed char)10;
int var_19 = 1321572534;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
