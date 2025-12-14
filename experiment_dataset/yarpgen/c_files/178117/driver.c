#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1371212585126846409LL;
unsigned int var_9 = 2926200961U;
unsigned short var_11 = (unsigned short)56875;
short var_15 = (short)31544;
int zero = 0;
int var_16 = 1275640881;
long long int var_17 = 432890545127896315LL;
short var_18 = (short)20792;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
