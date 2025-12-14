#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23042;
short var_2 = (short)24077;
short var_4 = (short)-5383;
unsigned int var_7 = 1296853368U;
unsigned int var_8 = 3326758924U;
long long int var_11 = -1559199684983900491LL;
short var_12 = (short)-16239;
int zero = 0;
short var_14 = (short)-18836;
short var_15 = (short)-31924;
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
