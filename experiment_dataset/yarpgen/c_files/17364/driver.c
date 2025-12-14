#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1257036083;
long long int var_5 = 1159747037259756977LL;
unsigned int var_7 = 1410188935U;
int var_12 = -1436562780;
int zero = 0;
int var_13 = -1960944611;
short var_14 = (short)-31579;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
