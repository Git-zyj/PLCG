#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8381167268597056376LL;
short var_2 = (short)-338;
short var_4 = (short)-4968;
unsigned int var_5 = 1746083679U;
unsigned int var_6 = 139203114U;
short var_11 = (short)7671;
int zero = 0;
int var_14 = 1286920689;
signed char var_15 = (signed char)6;
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
